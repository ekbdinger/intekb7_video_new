<?php
/**
 * @file
 * video_new.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function video_new_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_26' => array(
      'name' => 'Video Type',
      'machine_name' => 'vocabulary_26',
      'description' => 'Webinar, Dev Video Archive (old), Dev Video 2011, General',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
