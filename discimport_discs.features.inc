<?php
/**
 * @file
 * discimport_discs.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function discimport_discs_commerce_product_default_types() {
  $items = array(
    'discs' => array(
      'type' => 'discs',
      'name' => 'Discs',
      'description' => '<em>Discs</em> kan have en farve og bruges både til sportsdiscs og rekreation.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function discimport_discs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function discimport_discs_node_info() {
  $items = array(
    'discs' => array(
      'name' => t('Discs'),
      'base' => 'node_content',
      'description' => t('<em>Discs</em> indeholder produktvariationer med farver.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
