<?php
/**
 * @file
 * openband_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openband_news_taxonomy_default_vocabularies() {
  return array(
    'openband_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'openband_tags',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
