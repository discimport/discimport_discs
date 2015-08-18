<?php
/**
 * @file
 * discimport_discs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function discimport_discs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_discs';
  $strongarm->value = 0;
  $export['comment_anonymous_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_discs';
  $strongarm->value = 1;
  $export['comment_default_mode_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_discs';
  $strongarm->value = '50';
  $export['comment_default_per_page_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_discs';
  $strongarm->value = '0';
  $export['comment_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_discs';
  $strongarm->value = 1;
  $export['comment_form_location_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_discs';
  $strongarm->value = '1';
  $export['comment_preview_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_discs';
  $strongarm->value = 1;
  $export['comment_subject_field_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__discs';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_bag_size' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:field_color' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_stock' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:field_weight' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_plastic' => array(
          'default' => array(
            'weight' => '41',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:field_hat_size' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:field_shoe_size' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_storage_capacity' => array(
          'default' => array(
            'weight' => '38',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:field_top_size' => array(
          'default' => array(
            'weight' => '39',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_discs';
  $strongarm->value = '0';
  $export['language_content_type_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_discs';
  $strongarm->value = array();
  $export['menu_options_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_discs';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_discs';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_discs';
  $strongarm->value = '0';
  $export['node_preview_discs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_discs';
  $strongarm->value = 0;
  $export['node_submitted_discs'] = $strongarm;

  return $export;
}
