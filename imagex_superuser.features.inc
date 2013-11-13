<?php
/**
 * @file
 * imagex_superuser.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_superuser_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
