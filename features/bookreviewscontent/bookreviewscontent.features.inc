<?php
/**
 * @file
 * bookreviewscontent.features.inc
 */

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
