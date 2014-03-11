<?php
/**
 * @file
 * video_new.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function video_new_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'video_link';
  $feeds_importer->config = array(
    'name' => 'video_link',
    'description' => 'Use for imported videos from Vimeo',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '8',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'video_type',
            'target' => 'taxonomy_vocabulary_26',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'version',
            'target' => 'taxonomy_vocabulary_10',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'field_video_notes',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'vimeo',
            'target' => 'field_vimeo_link',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'url',
            'target' => 'field_video_link:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => '2',
        'skip_hash_check' => 0,
        'bundle' => 'video',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['video_link'] = $feeds_importer;

  return $export;
}
