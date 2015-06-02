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
    'regions' => array(
      'left' => array(
        0 => 'group_customer',
        2 => 'field_f_name',
        4 => 'field_l_name',
        6 => 'field_address',
        11 => 'field_city',
        14 => 'field_state',
        15 => 'field_zip_code',
        18 => 'field_phone',
        22 => 'field_email',
      ),
      'middle' => array(
        1 => 'group_customer_imp',
        3 => 'field_lessee_employer',
        8 => 'field_lessee_employer_position',
        9 => 'field_lessee_employer_address',
        13 => 'field_lessee_employer_city',
        16 => 'field_lessee_employer_state',
        19 => 'field_lessee_employer_zip_code',
        21 => 'field_lessee_employer_phone',
        23 => 'field_lessee_employer_income',
      ),
      'right' => array(
        5 => 'group_vehicle',
        7 => 'field_stock',
        10 => 'field_vin',
        12 => 'field_make',
        17 => 'field_model',
        20 => 'field_color',
      ),
    ),
    'fields' => array(
      'group_customer' => 'left',
      'group_customer_imp' => 'middle',
      'field_f_name' => 'left',
      'field_lessee_employer' => 'middle',
      'field_l_name' => 'left',
      'group_vehicle' => 'right',
      'field_address' => 'left',
      'field_stock' => 'right',
      'field_lessee_employer_position' => 'middle',
      'field_lessee_employer_address' => 'middle',
      'field_vin' => 'right',
      'field_city' => 'left',
      'field_make' => 'right',
      'field_lessee_employer_city' => 'middle',
      'field_state' => 'left',
      'field_zip_code' => 'left',
      'field_lessee_employer_state' => 'middle',
      'field_model' => 'right',
      'field_phone' => 'left',
      'field_lessee_employer_zip_code' => 'middle',
      'field_color' => 'right',
      'field_lessee_employer_phone' => 'middle',
      'field_email' => 'left',
      'field_lessee_employer_income' => 'middle',
    ),
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
    'layout_disable_css' => 0,
  );
  $export['node|deal_management|default'] = $ds_layout;

  return $export;
}
