<?php
/**
 * @file
 * discimport_discs.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function discimport_discs_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:discs.
  $config['node:discs'] = array(
    'instance' => 'node:discs',
    'config' => array(
      'title' => array(
        'value' => '[node:title]- [node:field-brand] | [site:name]',
      ),
    ),
  );

  return $config;
}
