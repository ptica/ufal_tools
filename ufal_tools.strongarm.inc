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
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
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
    60 => 'project-220-menu',
    61 => 'project-221-menu',
    62 => 'project-222-menu',
    63 => 'project-223-menu',
    64 => 'project-224-menu',
    65 => 'project-225-menu',
    66 => 'project-226-menu',
    67 => 'project-227-menu',
    68 => 'project-228-menu',
    69 => 'project-229-menu',
    70 => 'project-230-menu',
    71 => 'project-231-menu',
    72 => 'project-232-menu',
    73 => 'project-233-menu',
    74 => 'project-234-menu',
    75 => 'project-235-menu',
    76 => 'project-236-menu',
    77 => 'project-237-menu',
    78 => 'project-238-menu',
    79 => 'project-239-menu',
    80 => 'project-240-menu',
    81 => 'project-241-menu',
    82 => 'project-242-menu',
    83 => 'project-243-menu',
    84 => 'project-244-menu',
    85 => 'project-245-menu',
    86 => 'project-246-menu',
    87 => 'project-247-menu',
    88 => 'project-248-menu',
    89 => 'project-249-menu',
    90 => 'project-250-menu',
    91 => 'project-251-menu',
    92 => 'project-252-menu',
    93 => 'project-253-menu',
    94 => 'project-254-menu',
    95 => 'project-255-menu',
    96 => 'project-256-menu',
    97 => 'project-257-menu',
    98 => 'project-258-menu',
    99 => 'project-259-menu',
    100 => 'project-260-menu',
    101 => 'project-261-menu',
    102 => 'project-262-menu',
    103 => 'project-263-menu',
    104 => 'project-264-menu',
    105 => 'project-265-menu',
    106 => 'project-266-menu',
    107 => 'project-267-menu',
    108 => 'project-268-menu',
    109 => 'project-269-menu',
    110 => 'project-270-menu',
    111 => 'project-271-menu',
    112 => 'project-272-menu',
    113 => 'project-273-menu',
    114 => 'project-274-menu',
    115 => 'project-275-menu',
    116 => 'project-276-menu',
    117 => 'project-670-menu',
    118 => 'project-671-menu',
    119 => 'project-672-menu',
    120 => 'project-673-menu',
    121 => 'project-674-menu',
    122 => 'project-675-menu',
    123 => 'project-676-menu',
    124 => 'project-677-menu',
    125 => 'project-678-menu',
    126 => 'project-679-menu',
    127 => 'project-680-menu',
    128 => 'project-681-menu',
    129 => 'project-682-menu',
    130 => 'project-683-menu',
    131 => 'project-684-menu',
    132 => 'project-685-menu',
    133 => 'project-686-menu',
    134 => 'project-687-menu',
    135 => 'project-688-menu',
    136 => 'project-689-menu',
    137 => 'project-690-menu',
    138 => 'project-691-menu',
    139 => 'project-692-menu',
    140 => 'project-693-menu',
    141 => 'project-694-menu',
    142 => 'project-695-menu',
    143 => 'project-696-menu',
    144 => 'project-697-menu',
    145 => 'project-698-menu',
    146 => 'project-699-menu',
    147 => 'project-700-menu',
    148 => 'project-701-menu',
    149 => 'project-702-menu',
    150 => 'project-703-menu',
    151 => 'project-704-menu',
    152 => 'project-705-menu',
    153 => 'project-706-menu',
    154 => 'project-707-menu',
    155 => 'project-708-menu',
    156 => 'project-709-menu',
    157 => 'project-710-menu',
    158 => 'project-711-menu',
    159 => 'project-712-menu',
    160 => 'project-713-menu',
    161 => 'project-714-menu',
    162 => 'project-715-menu',
    163 => 'project-716-menu',
    164 => 'project-717-menu',
    165 => 'project-718-menu',
    166 => 'project-719-menu',
    167 => 'project-720-menu',
    168 => 'project-721-menu',
    169 => 'project-722-menu',
    170 => 'project-723-menu',
    171 => 'project-724-menu',
    172 => 'project-725-menu',
    173 => 'project-726-menu',
    174 => 'project-727-menu',
    175 => 'project-728-menu',
    176 => 'project-729-menu',
    177 => 'project-730-menu',
    178 => 'project-731-menu',
    179 => 'project-732-menu',
    180 => 'project-733-menu',
    181 => 'project-734-menu',
    182 => 'project-735-menu',
    183 => 'project-736-menu',
    184 => 'project-737-menu',
    185 => 'project-738-menu',
    186 => 'project-739-menu',
    187 => 'project-740-menu',
    188 => 'project-741-menu',
    189 => 'project-742-menu',
    190 => 'project-743-menu',
    191 => 'project-744-menu',
    192 => 'project-745-menu',
    193 => 'project-746-menu',
    194 => 'project-747-menu',
    195 => 'project-748-menu',
    196 => 'project-749-menu',
    197 => 'project-750-menu',
    198 => 'project-751-menu',
    199 => 'project-752-menu',
    200 => 'project-753-menu',
    201 => 'project-754-menu',
    202 => 'project-755-menu',
    203 => 'project-756-menu',
    204 => 'project-757-menu',
    205 => 'project-758-menu',
    206 => 'project-759-menu',
    207 => 'project-760-menu',
    208 => 'project-761-menu',
    209 => 'project-762-menu',
    210 => 'project-763-menu',
    211 => 'project-764-menu',
    212 => 'project-765-menu',
    213 => 'project-766-menu',
    214 => 'project-767-menu',
    215 => 'project-768-menu',
    216 => 'project-769-menu',
    217 => 'project-770-menu',
    218 => 'project-771-menu',
    219 => 'project-772-menu',
    220 => 'project-773-menu',
    221 => 'project-774-menu',
    222 => 'project-775-menu',
    223 => 'project-776-menu',
    224 => 'project-777-menu',
    225 => 'project-778-menu',
    226 => 'project-779-menu',
    227 => 'project-780-menu',
    228 => 'project-781-menu',
    229 => 'project-782-menu',
    230 => 'project-783-menu',
    231 => 'project-784-menu',
    232 => 'project-785-menu',
    233 => 'project-786-menu',
    234 => 'project-787-menu',
    235 => 'project-788-menu',
    236 => 'project-789-menu',
    237 => 'project-790-menu',
    238 => 'project-791-menu',
    239 => 'project-792-menu',
    240 => 'project-793-menu',
    241 => 'project-794-menu',
    242 => 'project-795-menu',
    243 => 'project-796-menu',
    244 => 'project-797-menu',
    245 => 'project-798-menu',
    246 => 'project-799-menu',
    247 => 'project-800-menu',
    248 => 'project-801-menu',
    249 => 'project-802-menu',
    250 => 'project-803-menu',
    251 => 'project-804-menu',
    252 => 'project-805-menu',
    253 => 'project-806-menu',
    254 => 'project-807-menu',
    255 => 'project-808-menu',
    256 => 'project-809-menu',
    257 => 'project-810-menu',
    258 => 'project-811-menu',
    259 => 'project-812-menu',
    260 => 'project-813-menu',
    261 => 'project-814-menu',
    262 => 'project-815-menu',
    263 => 'project-816-menu',
    264 => 'project-817-menu',
    265 => 'project-818-menu',
    266 => 'project-819-menu',
    267 => 'project-820-menu',
    268 => 'project-821-menu',
    269 => 'project-822-menu',
    270 => 'project-823-menu',
    271 => 'project-824-menu',
    272 => 'project-825-menu',
    273 => 'project-826-menu',
    274 => 'project-827-menu',
    275 => 'project-828-menu',
    276 => 'project-829-menu',
    277 => 'project-830-menu',
    278 => 'project-831-menu',
    279 => 'project-832-menu',
    280 => 'project-833-menu',
    281 => 'project-834-menu',
    282 => 'project-835-menu',
    283 => 'project-836-menu',
    284 => 'project-837-menu',
    285 => 'project-838-menu',
    286 => 'project-839-menu',
    287 => 'project-840-menu',
    288 => 'project-841-menu',
    289 => 'project-842-menu',
    290 => 'project-843-menu',
    291 => 'project-844-menu',
    292 => 'project-845-menu',
    293 => 'project-846-menu',
    294 => 'project-847-menu',
    295 => 'project-848-menu',
    296 => 'project-849-menu',
    297 => 'project-850-menu',
    298 => 'project-851-menu',
    299 => 'project-852-menu',
    300 => 'project-853-menu',
    301 => 'project-854-menu',
    302 => 'project-855-menu',
    303 => 'project-856-menu',
    304 => 'project-857-menu',
    305 => 'project-858-menu',
    306 => 'project-859-menu',
    307 => 'project-860-menu',
    308 => 'project-861-menu',
    309 => 'project-862-menu',
    310 => 'project-863-menu',
    311 => 'project-864-menu',
    312 => 'project-865-menu',
    313 => 'project-866-menu',
    314 => 'project-867-menu',
    315 => 'project-868-menu',
    316 => 'project-869-menu',
    317 => 'project-870-menu',
    318 => 'project-871-menu',
    319 => 'project-872-menu',
    320 => 'project-873-menu',
    321 => 'project-874-menu',
    322 => 'project-875-menu',
    323 => 'project-876-menu',
    324 => 'project-877-menu',
    325 => 'project-878-menu',
    326 => 'project-879-menu',
    327 => 'project-880-menu',
    328 => 'project-881-menu',
    329 => 'project-882-menu',
    330 => 'project-883-menu',
    331 => 'project-884-menu',
    332 => 'project-885-menu',
    333 => 'project-886-menu',
    334 => 'project-887-menu',
    335 => 'project-888-menu',
    336 => 'project-889-menu',
    337 => 'project-890-menu',
    338 => 'project-891-menu',
    339 => 'project-892-menu',
    340 => 'project-893-menu',
    341 => 'project-894-menu',
    342 => 'project-895-menu',
    343 => 'project-896-menu',
    344 => 'project-897-menu',
    345 => 'project-899-menu',
    346 => 'project-900-menu',
    347 => 'project-901-menu',
    348 => 'project-902-menu',
    349 => 'project-903-menu',
    350 => 'project-904-menu',
    351 => 'project-905-menu',
    352 => 'project-906-menu',
    353 => 'project-907-menu',
    354 => 'project-908-menu',
    355 => 'project-909-menu',
    356 => 'project-910-menu',
    357 => 'project-911-menu',
    358 => 'project-912-menu',
    359 => 'project-913-menu',
    360 => 'project-914-menu',
    361 => 'project-915-menu',
    362 => 'project-916-menu',
    363 => 'project-917-menu',
    364 => 'project-918-menu',
    365 => 'project-919-menu',
    366 => 'project-920-menu',
    367 => 'project-921-menu',
    368 => 'project-922-menu',
    369 => 'project-923-menu',
    370 => 'project-924-menu',
    371 => 'project-925-menu',
    372 => 'project-926-menu',
    373 => 'project-927-menu',
    374 => 'project-928-menu',
    375 => 'project-929-menu',
    376 => 'project-930-menu',
    377 => 'project-931-menu',
    378 => 'project-932-menu',
    379 => 'project-933-menu',
    380 => 'project-934-menu',
    381 => 'project-935-menu',
    382 => 'project-936-menu',
    383 => 'project-937-menu',
    384 => 'project-938-menu',
    385 => 'project-939-menu',
    386 => 'project-940-menu',
    387 => 'project-941-menu',
    388 => 'project-942-menu',
    389 => 'project-943-menu',
    390 => 'project-944-menu',
    391 => 'project-945-menu',
    392 => 'project-946-menu',
    393 => 'project-947-menu',
    394 => 'project-948-menu',
    395 => 'project-949-menu',
    396 => 'project-950-menu',
    397 => 'project-951-menu',
    398 => 'project-952-menu',
    399 => 'project-953-menu',
    400 => 'project-954-menu',
    401 => 'project-955-menu',
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
