<?php
/**
 * @file
 * ca_portfolio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_portfolio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_portfolio_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: portfolio_medium.
  $styles['portfolio_medium'] = array(
    'name' => 'portfolio_medium',
    'effects' => array(
      5 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => '220',
          'height' => '220',
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'portfolio_medium',
        ),
        'weight' => '0',
      ),
    ),
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
  return $items;
}
