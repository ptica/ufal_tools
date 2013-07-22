<?php
/**
 * @file
 * ufal_tools.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ufal_tools_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tools_spider';
  $strongarm->value = 0;
  $export['comment_anonymous_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ufal_tool';
  $strongarm->value = 0;
  $export['comment_anonymous_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ufal_tool_page';
  $strongarm->value = 0;
  $export['comment_anonymous_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tools_spider';
  $strongarm->value = 1;
  $export['comment_default_mode_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ufal_tool';
  $strongarm->value = 0;
  $export['comment_default_mode_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ufal_tool_page';
  $strongarm->value = 1;
  $export['comment_default_mode_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tools_spider';
  $strongarm->value = '50';
  $export['comment_default_per_page_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ufal_tool';
  $strongarm->value = '50';
  $export['comment_default_per_page_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ufal_tool_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tools_spider';
  $strongarm->value = 1;
  $export['comment_form_location_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ufal_tool';
  $strongarm->value = 1;
  $export['comment_form_location_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ufal_tool_page';
  $strongarm->value = 1;
  $export['comment_form_location_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tools_spider';
  $strongarm->value = '1';
  $export['comment_preview_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ufal_tool';
  $strongarm->value = '0';
  $export['comment_preview_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ufal_tool_page';
  $strongarm->value = '1';
  $export['comment_preview_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tools_spider';
  $strongarm->value = 1;
  $export['comment_subject_field_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ufal_tool';
  $strongarm->value = 1;
  $export['comment_subject_field_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ufal_tool_page';
  $strongarm->value = 1;
  $export['comment_subject_field_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tools_spider';
  $strongarm->value = '2';
  $export['comment_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ufal_tool';
  $strongarm->value = '1';
  $export['comment_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ufal_tool_page';
  $strongarm->value = '1';
  $export['comment_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ufal_tool';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ufal_tool_page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tools_spider';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ufal_tool';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ufal_tool_page';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'project-158-menu',
    2 => 'project-162-menu',
    3 => 'project-163-menu',
    4 => 'project-164-menu',
    5 => 'project-165-menu',
    6 => 'project-166-menu',
    7 => 'project-167-menu',
    8 => 'project-168-menu',
    9 => 'project-169-menu',
    10 => 'project-170-menu',
    11 => 'project-171-menu',
    12 => 'project-172-menu',
    13 => 'project-173-menu',
    14 => 'project-174-menu',
    15 => 'project-175-menu',
    16 => 'project-176-menu',
    17 => 'project-177-menu',
    18 => 'project-178-menu',
    19 => 'project-179-menu',
    20 => 'project-180-menu',
    21 => 'project-181-menu',
    22 => 'project-182-menu',
    23 => 'project-183-menu',
    24 => 'project-184-menu',
    25 => 'project-185-menu',
    26 => 'project-186-menu',
    27 => 'project-187-menu',
    28 => 'project-188-menu',
    29 => 'project-189-menu',
    30 => 'project-190-menu',
    31 => 'project-191-menu',
    32 => 'project-192-menu',
    33 => 'project-193-menu',
    34 => 'project-194-menu',
    35 => 'project-195-menu',
    36 => 'project-196-menu',
    37 => 'project-197-menu',
    38 => 'project-198-menu',
    39 => 'project-199-menu',
    40 => 'project-200-menu',
    41 => 'project-201-menu',
    42 => 'project-202-menu',
    43 => 'project-203-menu',
    44 => 'project-204-menu',
    45 => 'project-205-menu',
    46 => 'project-206-menu',
    47 => 'project-207-menu',
    48 => 'project-208-menu',
    49 => 'project-209-menu',
    50 => 'project-210-menu',
    51 => 'project-211-menu',
    52 => 'project-212-menu',
    53 => 'project-213-menu',
    54 => 'project-214-menu',
    55 => 'project-215-menu',
    56 => 'project-216-menu',
    57 => 'project-217-menu',
    58 => 'project-218-menu',
    59 => 'project-219-menu',
  );
  $export['menu_options_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tools_spider';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ufal_tool';
  $strongarm->value = 'main-menu:575';
  $export['menu_parent_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ufal_tool_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tools_spider';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ufal_tool';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ufal_tool_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tools_spider';
  $strongarm->value = '1';
  $export['node_preview_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ufal_tool';
  $strongarm->value = '1';
  $export['node_preview_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ufal_tool_page';
  $strongarm->value = '1';
  $export['node_preview_ufal_tool_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tools_spider';
  $strongarm->value = 1;
  $export['node_submitted_tools_spider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ufal_tool';
  $strongarm->value = 0;
  $export['node_submitted_ufal_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ufal_tool_page';
  $strongarm->value = 0;
  $export['node_submitted_ufal_tool_page'] = $strongarm;

  return $export;
}
