<?php
/**
 * @file
 * openband_gigs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openband_gigs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openband_gigs_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openband_gigs_node_info() {
  $items = array(
    'openband_gig' => array(
      'name' => t('Gig'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
