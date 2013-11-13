<?php
/**
 * @file
 * imagex_superuser.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_superuser_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_select_defaults';
  $strongarm->value = array(
    6 => array(
      'admin_select_default' => 'toolbar',
      'weight' => '0',
    ),
    4 => array(
      'admin_select_default' => 'toolbar',
      'weight' => '0',
    ),
    8 => array(
      'admin_select_default' => 'admin_menu',
      'weight' => '0',
    ),
    5 => array(
      'admin_select_default' => 'toolbar',
      'weight' => '0',
    ),
    7 => array(
      'admin_select_default' => 'toolbar',
      'weight' => '0',
    ),
    2 => array(
      'admin_select_default' => '',
      'weight' => '0',
    ),
    3 => array(
      'admin_select_default' => 'toolbar',
      'weight' => '0',
    ),
  );
  $export['admin_select_defaults'] = $strongarm;

  return $export;
}
