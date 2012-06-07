<?php
/**
 * @file
 * features_slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function features_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_slideshow_node_info() {
  $items = array(
    'features_slideshow' => array(
      'name' => t('Features Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
