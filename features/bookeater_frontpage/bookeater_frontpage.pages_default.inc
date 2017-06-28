<?php
/**
 * @file
 * bookeater_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bookeater_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'frontpage';
  $page->admin_description = 'forside til bookeater';
  $page->path = 'forside';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage__panel';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'forside',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b31606d8-ad0e-4e33-bdd7-ac920f0c7d49';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_frontpage__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0c64c0b8-f92d-44c9-a75a-8238f9322162';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'bookreviews_v2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 1,
    'override_title_text' => 'Nyeste anmeldelser',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0c64c0b8-f92d-44c9-a75a-8238f9322162';
  $display->content['new-0c64c0b8-f92d-44c9-a75a-8238f9322162'] = $pane;
  $display->panels['left'][0] = 'new-0c64c0b8-f92d-44c9-a75a-8238f9322162';
  $pane = new stdClass();
  $pane->pid = 'new-a20e1df0-f21d-434b-8507-82fd5eaa0d05';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'forum-new';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-seperation content-box sidebar-top-margin',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a20e1df0-f21d-434b-8507-82fd5eaa0d05';
  $display->content['new-a20e1df0-f21d-434b-8507-82fd5eaa0d05'] = $pane;
  $display->panels['right'][0] = 'new-a20e1df0-f21d-434b-8507-82fd5eaa0d05';
  $pane = new stdClass();
  $pane->pid = 'new-a9936e69-e7f5-412d-a884-98ffe335a184';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'forum-active';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-seperation content-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a9936e69-e7f5-412d-a884-98ffe335a184';
  $display->content['new-a9936e69-e7f5-412d-a884-98ffe335a184'] = $pane;
  $display->panels['right'][1] = 'new-a9936e69-e7f5-412d-a884-98ffe335a184';
  $pane = new stdClass();
  $pane->pid = 'new-56549eee-3865-4f9e-bf9f-7580e6dd716c';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'fb_likebox-0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-seperation content-box',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '56549eee-3865-4f9e-bf9f-7580e6dd716c';
  $display->content['new-56549eee-3865-4f9e-bf9f-7580e6dd716c'] = $pane;
  $display->panels['right'][2] = 'new-56549eee-3865-4f9e-bf9f-7580e6dd716c';
  $pane = new stdClass();
  $pane->pid = 'new-3793219d-f8e5-42ef-b1bd-11c47b9d9c3e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'twitter_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-seperation content-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3793219d-f8e5-42ef-b1bd-11c47b9d9c3e';
  $display->content['new-3793219d-f8e5-42ef-b1bd-11c47b9d9c3e'] = $pane;
  $display->panels['right'][3] = 'new-3793219d-f8e5-42ef-b1bd-11c47b9d9c3e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a9936e69-e7f5-412d-a884-98ffe335a184';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
