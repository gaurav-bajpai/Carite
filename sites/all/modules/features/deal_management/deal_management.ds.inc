<?php
/**
 * @file
 * deal_management.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function deal_management_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|deal_management|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'deal_management';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_equal_width';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'left' => array(
        0 => 'field_f_name',
        1 => 'field_l_name',
        2 => 'field_address',
        3 => 'field_city',
        4 => 'field_state',
        5 => 'field_zip_code',
        6 => 'field_phone',
        7 => 'field_email',
      ),
      'middle' => array(
        0 => 'field_lessee_employer',
        1 => 'field_lessee_employer_position',
        2 => 'field_lessee_employer_address',
        3 => 'field_lessee_employer_city',
        4 => 'field_lessee_employer_state',
        5 => 'field_lessee_employer_zip_code',
        6 => 'field_lessee_employer_phone',
        7 => 'field_lessee_employer_income',
      ),
      'right' => array(
        0 => 'field_stock',
        1 => 'field_vin',
        2 => 'field_make',
        3 => 'field_model',
        4 => 'field_color',
      ),
    ),
    'fields' => array(
      'field_f_name' => 'left',
      'field_l_name' => 'left',
      'field_address' => 'left',
      'field_city' => 'left',
      'field_state' => 'left',
      'field_zip_code' => 'left',
      'field_phone' => 'left',
      'field_email' => 'left',
      'field_lessee_employer' => 'middle',
      'field_lessee_employer_position' => 'middle',
      'field_lessee_employer_address' => 'middle',
      'field_lessee_employer_city' => 'middle',
      'field_lessee_employer_state' => 'middle',
      'field_lessee_employer_zip_code' => 'middle',
      'field_lessee_employer_phone' => 'middle',
      'field_lessee_employer_income' => 'middle',
      'field_stock' => 'right',
      'field_vin' => 'right',
      'field_make' => 'right',
      'field_model' => 'right',
      'field_color' => 'right',
    ),
  );
  $export['node|deal_management|default'] = $ds_layout;

  return $export;
}
