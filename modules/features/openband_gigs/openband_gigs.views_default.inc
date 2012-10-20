<?php
/**
 * @file
 * openband_gigs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openband_gigs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openband_gigs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gigs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_gig_date' => 'field_gig_date',
    'title' => 'title',
    'field_gig_location' => 'title',
    'field_gig_tickets_link' => 'field_gig_tickets_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_gig_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'field_gig_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gig_tickets_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_gig_date']['id'] = 'field_gig_date';
  $handler->display->display_options['fields']['field_gig_date']['table'] = 'field_data_field_gig_date';
  $handler->display->display_options['fields']['field_gig_date']['field'] = 'field_gig_date';
  $handler->display->display_options['fields']['field_gig_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Details';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_gig_location']['id'] = 'field_gig_location';
  $handler->display->display_options['fields']['field_gig_location']['table'] = 'field_data_field_gig_location';
  $handler->display->display_options['fields']['field_gig_location']['field'] = 'field_gig_location';
  /* Field: Content: Buy Tickets */
  $handler->display->display_options['fields']['field_gig_tickets_link']['id'] = 'field_gig_tickets_link';
  $handler->display->display_options['fields']['field_gig_tickets_link']['table'] = 'field_data_field_gig_tickets_link';
  $handler->display->display_options['fields']['field_gig_tickets_link']['field'] = 'field_gig_tickets_link';
  $handler->display->display_options['fields']['field_gig_tickets_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_gig_tickets_link']['type'] = 'link_title_plain';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openband_gig' => 'openband_gig',
  );

  /* Display: List of Gigs in Table */
  $handler = $view->new_display('panel_pane', 'List of Gigs in Table', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Gigs';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['openband_gigs'] = $view;

  return $export;
}
