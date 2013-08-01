<?php
/**
 * @file
 * ufal_tools.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ufal_tools_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ufal_tool|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ufal_tool';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
    'field_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|ufal_tool|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ufal_tools_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ufal_tool|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ufal_tool';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
        8 => 'field_screenshot',
      ),
      'right' => array(
        2 => 'field_homepage',
        3 => 'field_author',
        4 => 'field_tutorial',
        5 => 'field_status',
        6 => 'field_os',
        7 => 'field_license',
        9 => 'field_tags',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'field_homepage' => 'right',
      'field_author' => 'right',
      'field_tutorial' => 'right',
      'field_status' => 'right',
      'field_os' => 'right',
      'field_license' => 'right',
      'field_screenshot' => 'left',
      'field_tags' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'right' => array(
        'navbox' => 'navbox',
      ),
    ),
    'wrappers' => array(
      'left' => 'article',
      'right' => 'aside',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|ufal_tool|default'] = $ds_layout;

  return $export;
}
