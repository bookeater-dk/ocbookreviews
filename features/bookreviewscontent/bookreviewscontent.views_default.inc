<?php
/**
 * @file
 * bookreviewscontent.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bookreviewscontent_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bookreviews_v2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bookreviews v2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bookreviews v2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_bookreview_target_id']['id'] = 'field_bookreview_target_id';
  $handler->display->display_options['relationships']['field_bookreview_target_id']['table'] = 'field_data_field_bookreview';
  $handler->display->display_options['relationships']['field_bookreview_target_id']['field'] = 'field_bookreview_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: brimage */
  $handler->display->display_options['fields']['field_brimage']['id'] = 'field_brimage';
  $handler->display->display_options['fields']['field_brimage']['table'] = 'field_data_field_brimage';
  $handler->display->display_options['fields']['field_brimage']['field'] = 'field_brimage';
  $handler->display->display_options['fields']['field_brimage']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_brimage']['label'] = '';
  $handler->display->display_options['fields']['field_brimage']['alter']['text'] = '[field_brimage]';
  $handler->display->display_options['fields']['field_brimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Udgivelsesår */
  $handler->display->display_options['fields']['field_udgivelses_r']['id'] = 'field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['table'] = 'field_data_field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['field'] = 'field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_udgivelses_r']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelses_r']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelses_r']['hide_empty'] = TRUE;
  /* Field: Content: Serie */
  $handler->display->display_options['fields']['field_serie']['id'] = 'field_serie';
  $handler->display->display_options['fields']['field_serie']['table'] = 'field_data_field_serie';
  $handler->display->display_options['fields']['field_serie']['field'] = 'field_serie';
  $handler->display->display_options['fields']['field_serie']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_serie']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_serie']['hide_empty'] = TRUE;
  /* Field: Content: Kort Fortalt */
  $handler->display->display_options['fields']['field_kort_fortalt']['id'] = 'field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['table'] = 'field_data_field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['field'] = 'field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_kort_fortalt']['hide_empty'] = TRUE;
  /* Field: Content: Sprog */
  $handler->display->display_options['fields']['field_sprog']['id'] = 'field_sprog';
  $handler->display->display_options['fields']['field_sprog']['table'] = 'field_data_field_sprog';
  $handler->display->display_options['fields']['field_sprog']['field'] = 'field_sprog';
  $handler->display->display_options['fields']['field_sprog']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_sprog']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sprog']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: Content: Underholdningsværdi */
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['id'] = 'field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['table'] = 'field_data_field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['field'] = 'field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: Content: Samlet Bedømmelse */
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['id'] = 'field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['table'] = 'field_data_field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['field'] = 'field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Skrevet af';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: bookreview (field_bookreview) */
  $handler->display->display_options['filters']['field_bookreview_target_id']['id'] = 'field_bookreview_target_id';
  $handler->display->display_options['filters']['field_bookreview_target_id']['table'] = 'field_data_field_bookreview';
  $handler->display->display_options['filters']['field_bookreview_target_id']['field'] = 'field_bookreview_target_id';
  $handler->display->display_options['filters']['field_bookreview_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: brimage */
  $handler->display->display_options['fields']['field_brimage']['id'] = 'field_brimage';
  $handler->display->display_options['fields']['field_brimage']['table'] = 'field_data_field_brimage';
  $handler->display->display_options['fields']['field_brimage']['field'] = 'field_brimage';
  $handler->display->display_options['fields']['field_brimage']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_brimage']['label'] = '';
  $handler->display->display_options['fields']['field_brimage']['alter']['text'] = '[field_brimage]';
  $handler->display->display_options['fields']['field_brimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brimage']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Udgivelsesår */
  $handler->display->display_options['fields']['field_udgivelses_r']['id'] = 'field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['table'] = 'field_data_field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['field'] = 'field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_udgivelses_r']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelses_r']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelses_r']['hide_empty'] = TRUE;
  /* Field: Content: Serie */
  $handler->display->display_options['fields']['field_serie']['id'] = 'field_serie';
  $handler->display->display_options['fields']['field_serie']['table'] = 'field_data_field_serie';
  $handler->display->display_options['fields']['field_serie']['field'] = 'field_serie';
  $handler->display->display_options['fields']['field_serie']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_serie']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_serie']['hide_empty'] = TRUE;
  /* Field: Content: Kort Fortalt */
  $handler->display->display_options['fields']['field_kort_fortalt']['id'] = 'field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['table'] = 'field_data_field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['field'] = 'field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_kort_fortalt']['hide_empty'] = TRUE;
  /* Field: Content: Sprog */
  $handler->display->display_options['fields']['field_sprog']['id'] = 'field_sprog';
  $handler->display->display_options['fields']['field_sprog']['table'] = 'field_data_field_sprog';
  $handler->display->display_options['fields']['field_sprog']['field'] = 'field_sprog';
  $handler->display->display_options['fields']['field_sprog']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_sprog']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sprog']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: Content: Underholdningsværdi */
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['id'] = 'field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['table'] = 'field_data_field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['field'] = 'field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: Content: Samlet Bedømmelse */
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['id'] = 'field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['table'] = 'field_data_field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['field'] = 'field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Skrevet af';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['path'] = 'bookreviews-v2';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'bookreviews_block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: brimage */
  $handler->display->display_options['fields']['field_brimage']['id'] = 'field_brimage';
  $handler->display->display_options['fields']['field_brimage']['table'] = 'field_data_field_brimage';
  $handler->display->display_options['fields']['field_brimage']['field'] = 'field_brimage';
  $handler->display->display_options['fields']['field_brimage']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_brimage']['label'] = '';
  $handler->display->display_options['fields']['field_brimage']['alter']['text'] = '[field_brimage]';
  $handler->display->display_options['fields']['field_brimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Udgivelsesår */
  $handler->display->display_options['fields']['field_udgivelses_r']['id'] = 'field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['table'] = 'field_data_field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['field'] = 'field_udgivelses_r';
  $handler->display->display_options['fields']['field_udgivelses_r']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_udgivelses_r']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelses_r']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udgivelses_r']['hide_empty'] = TRUE;
  /* Field: Content: Serie */
  $handler->display->display_options['fields']['field_serie']['id'] = 'field_serie';
  $handler->display->display_options['fields']['field_serie']['table'] = 'field_data_field_serie';
  $handler->display->display_options['fields']['field_serie']['field'] = 'field_serie';
  $handler->display->display_options['fields']['field_serie']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_serie']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_serie']['hide_empty'] = TRUE;
  /* Field: Content: Kort Fortalt */
  $handler->display->display_options['fields']['field_kort_fortalt']['id'] = 'field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['table'] = 'field_data_field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['field'] = 'field_kort_fortalt';
  $handler->display->display_options['fields']['field_kort_fortalt']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_kort_fortalt']['hide_empty'] = TRUE;
  /* Field: Content: Sprog */
  $handler->display->display_options['fields']['field_sprog']['id'] = 'field_sprog';
  $handler->display->display_options['fields']['field_sprog']['table'] = 'field_data_field_sprog';
  $handler->display->display_options['fields']['field_sprog']['field'] = 'field_sprog';
  $handler->display->display_options['fields']['field_sprog']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_sprog']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sprog']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: Content: Underholdningsværdi */
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['id'] = 'field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['table'] = 'field_data_field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['field'] = 'field_underholdningsv_rdi';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_underholdningsv_rdi']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: Content: Samlet Bedømmelse */
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['id'] = 'field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['table'] = 'field_data_field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['field'] = 'field_samlet_bed_mmelse';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['relationship'] = 'field_bookreview_target_id';
  $handler->display->display_options['fields']['field_samlet_bed_mmelse']['settings'] = array(
    'fill_blank' => 1,
    'icon_type' => 'star',
    'icon_color' => '1',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Skrevet af';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $export['bookreviews_v2'] = $view;

  return $export;
}
