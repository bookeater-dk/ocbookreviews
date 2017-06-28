<?php
/**
 * @file
 * bookreviewscontent.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bookreviewscontent_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bookreviewscontent_image_default_styles() {
  $styles = array();

  // Exported image style: full.
  $styles['full'] = array(
    'label' => 'Full',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bookreviewscontent_node_info() {
  $items = array(
    'bookreviews' => array(
      'name' => t('BookReviews'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
