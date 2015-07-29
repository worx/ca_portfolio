<?php
/**
 * @file
 * ca_portfolio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_portfolio_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_portfolio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: portfolio_medium.
  $styles['portfolio_medium'] = array(
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'portfolio_medium',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'portfolio_medium',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ca_portfolio_node_info() {
  $items = array(
    'ca_portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
