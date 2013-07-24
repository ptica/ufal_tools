<?php
/**
 * @file
 * ufal_tools.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ufal_tools_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tools_spider';
  $feeds_importer->config = array(
    'name' => 'tools spider',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsSpider',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserHTML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'h1/text()',
          'xpathparser:1' => '//*[@id="content"]/text()',
          'xpathparser:2' => 'table/tr[1]/td',
          'xpathparser:3' => 'string(table/tr[1]/td/a/@href)',
          'xpathparser:4' => 'table/tr[2]/td/text()',
          'xpathparser:5' => 'string(table/tr[2]/td/a/@href)',
          'xpathparser:6' => 'table/tr[3]/td/text()',
          'xpathparser:7' => 'string(table/tr[3]/td/a/@href)',
          'xpathparser:8' => 'table/tr[4]/td',
          'xpathparser:9' => 'table/tr[5]/td',
          'xpathparser:10' => 'table/tr[6]/td/text()',
          'xpathparser:11' => 'string(table/tr[6]/td/a/@href)',
          'xpathparser:12' => 'concat(\'http://ufal.mff.cuni.cz\', string(div/img/@src))',
          'xpathparser:13' => 'concat(\'Tools, \', string(h1/a/text()))',
        ),
        'rawXML' => array(
          'xpathparser:1' => 'xpathparser:1',
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
        ),
        'context' => '//*[@id="content"]',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_author:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_author:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_homepage:title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_homepage:url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_tutorial:title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_tutorial:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_status',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_os',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_license:title',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_license:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_screenshot',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ufal_tool',
      ),
    ),
    'content_type' => 'tools_spider',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['tools_spider'] = $feeds_importer;

  return $export;
}
