<?php
/**
 * @file
 * ufal_tools.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ufal_tools_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'tools spider index',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3b4c9c45-4b9d-4269-b0be-1ed4f6d2a30a',
  'type' => 'tools_spider',
  'language' => 'und',
  'created' => 1374267482,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '578f409e-f5ae-4703-849a-a75bdd0b2ff7',
  'revision_uid' => 1,
  'body' => array(),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'emilk',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-07-19 22:58:02 +0200',
);
  return $nodes;
}
