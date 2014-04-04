<?php
/**
 * @file
 * video_new.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function video_new_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Video Content Listing Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_vimeo_link' => 'field_vimeo_link',
    'taxonomy_vocabulary_10' => 'taxonomy_vocabulary_10',
    'taxonomy_vocabulary_26' => 'taxonomy_vocabulary_26',
    'field_doc_date' => 'field_doc_date',
    'field_video_notes' => 'field_video_notes',
    'field_video_link' => 'field_video_link',
    'field_webinar_category' => 'field_webinar_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vimeo_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_10' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_26' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_webinar_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Created on 03/21/2014.  Use this for myself and maybe a video content admin. I\'ll create a separate listing page that looks better.</p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Vimeo Link */
  $handler->display->display_options['fields']['field_vimeo_link']['id'] = 'field_vimeo_link';
  $handler->display->display_options['fields']['field_vimeo_link']['table'] = 'field_data_field_vimeo_link';
  $handler->display->display_options['fields']['field_vimeo_link']['field'] = 'field_vimeo_link';
  $handler->display->display_options['fields']['field_vimeo_link']['click_sort_column'] = 'fid';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['id'] = 'taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['field'] = 'taxonomy_vocabulary_10';
  /* Field: Content: Video Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['id'] = 'taxonomy_vocabulary_26';
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['table'] = 'field_data_taxonomy_vocabulary_26';
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['field'] = 'taxonomy_vocabulary_26';
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Video Notes */
  $handler->display->display_options['fields']['field_video_notes']['id'] = 'field_video_notes';
  $handler->display->display_options['fields']['field_video_notes']['table'] = 'field_data_field_video_notes';
  $handler->display->display_options['fields']['field_video_notes']['field'] = 'field_video_notes';
  $handler->display->display_options['fields']['field_video_notes']['label'] = 'Notes';
  /* Field: Content: Video Link */
  $handler->display->display_options['fields']['field_video_link']['id'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['table'] = 'field_data_field_video_link';
  $handler->display->display_options['fields']['field_video_link']['field'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['click_sort_column'] = 'url';
  /* Field: Content: Webinar Category */
  $handler->display->display_options['fields']['field_webinar_category']['id'] = 'field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['table'] = 'field_data_field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['field'] = 'field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['label'] = '';
  $handler->display->display_options['fields']['field_webinar_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_category']['alter']['text'] = '<p>&nbsp;</p>
<h2>[field_webinar_category]</h2>';
  $handler->display->display_options['fields']['field_webinar_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webinar_category']['type'] = 'taxonomy_term_reference_plain';
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
    'video' => 'video',
  );
  /* Filter criterion: Content: Version (taxonomy_vocabulary_10) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['id'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['field'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['identifier'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['vocabulary'] = 'vocabulary_10';
  /* Filter criterion: Content: Video Type (taxonomy_vocabulary_26) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['id'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['table'] = 'field_data_taxonomy_vocabulary_26';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['field'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_26_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['label'] = 'Video Type';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['operator'] = 'taxonomy_vocabulary_26_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['identifier'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['vocabulary'] = 'vocabulary_26';
  /* Filter criterion: Content: Webinar Category (field_webinar_category) */
  $handler->display->display_options['filters']['field_webinar_category_tid']['id'] = 'field_webinar_category_tid';
  $handler->display->display_options['filters']['field_webinar_category_tid']['table'] = 'field_data_field_webinar_category';
  $handler->display->display_options['filters']['field_webinar_category_tid']['field'] = 'field_webinar_category_tid';
  $handler->display->display_options['filters']['field_webinar_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['operator_id'] = 'field_webinar_category_tid_op';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['label'] = 'Webinar Category';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['operator'] = 'field_webinar_category_tid_op';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['identifier'] = 'field_webinar_category_tid';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['field_webinar_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_webinar_category_tid']['vocabulary'] = 'webinar_category';

  /* Display: Admin Page */
  $handler = $view->new_display('page', 'Admin Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Vimeo Link */
  $handler->display->display_options['fields']['field_vimeo_link']['id'] = 'field_vimeo_link';
  $handler->display->display_options['fields']['field_vimeo_link']['table'] = 'field_data_field_vimeo_link';
  $handler->display->display_options['fields']['field_vimeo_link']['field'] = 'field_vimeo_link';
  $handler->display->display_options['fields']['field_vimeo_link']['click_sort_column'] = 'fid';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['id'] = 'taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['field'] = 'taxonomy_vocabulary_10';
  /* Field: Content: Video Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['id'] = 'taxonomy_vocabulary_26';
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['table'] = 'field_data_taxonomy_vocabulary_26';
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['field'] = 'taxonomy_vocabulary_26';
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Video Notes */
  $handler->display->display_options['fields']['field_video_notes']['id'] = 'field_video_notes';
  $handler->display->display_options['fields']['field_video_notes']['table'] = 'field_data_field_video_notes';
  $handler->display->display_options['fields']['field_video_notes']['field'] = 'field_video_notes';
  $handler->display->display_options['fields']['field_video_notes']['label'] = 'Notes';
  /* Field: Content: Video Link */
  $handler->display->display_options['fields']['field_video_link']['id'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['table'] = 'field_data_field_video_link';
  $handler->display->display_options['fields']['field_video_link']['field'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['click_sort_column'] = 'url';
  /* Field: Content: Webinar Category */
  $handler->display->display_options['fields']['field_webinar_category']['id'] = 'field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['table'] = 'field_data_field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['field'] = 'field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['label'] = '';
  $handler->display->display_options['fields']['field_webinar_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webinar_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'new-videos';

  /* Display: Listing Page */
  $handler = $view->new_display('page', 'Listing Page', 'page_1');
  $handler->display->display_options['display_description'] = 'Might just be for Webinars initially';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_webinar_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_video_link' => 'field_video_link',
    'taxonomy_vocabulary_10' => 'taxonomy_vocabulary_10',
    'taxonomy_vocabulary_26' => 'taxonomy_vocabulary_26',
    'field_doc_date' => 'field_doc_date',
    'field_video_notes' => 'field_video_notes',
    'field_webinar_category' => 'field_webinar_category',
    'timestamp' => 'timestamp',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_webinar_category';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_10' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_26' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_webinar_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Video Link */
  $handler->display->display_options['fields']['field_video_link']['id'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['table'] = 'field_data_field_video_link';
  $handler->display->display_options['fields']['field_video_link']['field'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_video_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_link']['alter']['text'] = 'View on Vimeo&nbsp;<span class="glyphicon glyphicon-facetime-video"></span>';
  $handler->display->display_options['fields']['field_video_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_link']['alter']['path'] = '[field_video_link]';
  $handler->display->display_options['fields']['field_video_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_video_link']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_link']['click_sort_column'] = 'url';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['id'] = 'taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['field'] = 'taxonomy_vocabulary_10';
  /* Field: Content: Video Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['id'] = 'taxonomy_vocabulary_26';
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['table'] = 'field_data_taxonomy_vocabulary_26';
  $handler->display->display_options['fields']['taxonomy_vocabulary_26']['field'] = 'taxonomy_vocabulary_26';
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Webinar Category */
  $handler->display->display_options['fields']['field_webinar_category']['id'] = 'field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['table'] = 'field_data_field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['field'] = 'field_webinar_category';
  $handler->display->display_options['fields']['field_webinar_category']['label'] = '';
  $handler->display->display_options['fields']['field_webinar_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_category']['alter']['text'] = '<p>&nbsp;</p>
<h3>[field_webinar_category]</h3>';
  $handler->display->display_options['fields']['field_webinar_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webinar_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['alter']['text'] = '<strong> <p class="text-danger">[timestamp]</p></strong>';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'video' => 'video',
  );
  /* Filter criterion: Content: Version (taxonomy_vocabulary_10) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['id'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['field'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['identifier'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['vocabulary'] = 'vocabulary_10';
  /* Filter criterion: Content: Video Type (taxonomy_vocabulary_26) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['id'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['table'] = 'field_data_taxonomy_vocabulary_26';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['field'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_26_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['label'] = 'Video Type';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['operator'] = 'taxonomy_vocabulary_26_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['identifier'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['vocabulary'] = 'vocabulary_26';
  /* Filter criterion: Content: Webinar Category (field_webinar_category) */
  $handler->display->display_options['filters']['field_webinar_category_tid']['id'] = 'field_webinar_category_tid';
  $handler->display->display_options['filters']['field_webinar_category_tid']['table'] = 'field_data_field_webinar_category';
  $handler->display->display_options['filters']['field_webinar_category_tid']['field'] = 'field_webinar_category_tid';
  $handler->display->display_options['filters']['field_webinar_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['operator_id'] = 'field_webinar_category_tid_op';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['label'] = 'Webinar Category';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['operator'] = 'field_webinar_category_tid_op';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['identifier'] = 'field_webinar_category_tid';
  $handler->display->display_options['filters']['field_webinar_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['field_webinar_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_webinar_category_tid']['vocabulary'] = 'webinar_category';
  /* Filter criterion: Content: Last Updated (field_doc_date) */
  $handler->display->display_options['filters']['field_doc_date_value']['id'] = 'field_doc_date_value';
  $handler->display->display_options['filters']['field_doc_date_value']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['filters']['field_doc_date_value']['field'] = 'field_doc_date_value';
  $handler->display->display_options['filters']['field_doc_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_date_value']['expose']['operator_id'] = 'field_doc_date_value_op';
  $handler->display->display_options['filters']['field_doc_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_doc_date_value']['expose']['operator'] = 'field_doc_date_value_op';
  $handler->display->display_options['filters']['field_doc_date_value']['expose']['identifier'] = 'field_doc_date_value';
  $handler->display->display_options['filters']['field_doc_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['field_doc_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_doc_date_value']['year_range'] = '-5:+0';
  /* Filter criterion: Content: Has new content */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'history';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Has new content';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['path'] = 'new-videos/list';
  $export['new_videos'] = $view;

  return $export;
}
