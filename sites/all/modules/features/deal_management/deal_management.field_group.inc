<?php
/**
 * @file
 * deal_management.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function deal_management_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_lessee_employer_details|node|deal_management|form';
  $field_group->group_name = 'group_co_lessee_employer_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_employer_info';
  $field_group->data = array(
    'label' => 'Co Lessee Employer Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_co_lessee_employer',
      1 => 'field_co_lessee_employer_pos',
      2 => 'field_co_lessee_employer_address',
      3 => 'field_co_lessee_employer_city',
      4 => 'field_co_lessee_employer_state',
      5 => 'field_co_lessee_employer_zipcode',
      6 => 'field_co_lessee_employer_phone',
      7 => 'field_co_lessee_employer_income',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-co-lessee-employer-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_co_lessee_employer_details|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_lessee|node|deal_management|form';
  $field_group->group_name = 'group_co_lessee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_customer_info';
  $field_group->data = array(
    'label' => 'Co-Lessee',
    'weight' => '3',
    'children' => array(
      0 => 'field_co_lessee_f_name',
      1 => 'field_co_lessee_l_name',
      2 => 'field_co_lessee_ssn',
      3 => 'field_co_lessee_date_of_birth',
      4 => 'field_co_lessee_address',
      5 => 'field_co_lessee_city',
      6 => 'field_co_lessee_state',
      7 => 'field_co_lessee_zip_code',
      8 => 'field_co_lessee_phone',
      9 => 'field_co_lessee_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-co-lessee field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_co_lessee|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contract_info|node|deal_management|form';
  $field_group->group_name = 'group_contract_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_contract_monthly_income',
      1 => 'field_term',
      2 => 'field_service_contract',
      3 => 'field_cpi',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contract-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contract_info|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_imp|node|deal_management|default';
  $field_group->group_name = 'group_customer_imp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customer',
    'weight' => '1',
    'children' => array(
      0 => 'field_lessee_employer',
      1 => 'field_lessee_employer_address',
      2 => 'field_lessee_employer_city',
      3 => 'field_lessee_employer_income',
      4 => 'field_lessee_employer_phone',
      5 => 'field_lessee_employer_position',
      6 => 'field_lessee_employer_state',
      7 => 'field_lessee_employer_zip_code',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Customer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-customer-imp field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customer_imp|node|deal_management|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_info|node|deal_management|form';
  $field_group->group_name = 'group_customer_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customer Info',
    'weight' => '2',
    'children' => array(
      0 => 'group_co_lessee',
      1 => 'group_lessee',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-customer-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_customer_info|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer|node|deal_management|default';
  $field_group->group_name = 'group_customer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customer',
    'weight' => '0',
    'children' => array(
      0 => 'field_f_name',
      1 => 'field_l_name',
      2 => 'field_address',
      3 => 'field_city',
      4 => 'field_state',
      5 => 'field_zip_code',
      6 => 'field_phone',
      7 => 'field_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Customer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-customer field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customer|node|deal_management|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dealership_info|node|deal_management|form';
  $field_group->group_name = 'group_dealership_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dealership Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_location',
      1 => 'field_dealer_phone',
      2 => 'field_sales_manager',
      3 => 'field_sales_person',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dealership-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dealership_info|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employer_info|node|deal_management|form';
  $field_group->group_name = 'group_employer_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employer Info',
    'weight' => '3',
    'children' => array(
      0 => 'group_lessee_employer_details',
      1 => 'group_co_lessee_employer_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-employer-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_employer_info|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lessee_employer_details|node|deal_management|form';
  $field_group->group_name = 'group_lessee_employer_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_employer_info';
  $field_group->data = array(
    'label' => 'Lessee Employer Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_lessee_employer',
      1 => 'field_lessee_employer_position',
      2 => 'field_lessee_employer_address',
      3 => 'field_lessee_employer_city',
      4 => 'field_lessee_employer_state',
      5 => 'field_lessee_employer_zip_code',
      6 => 'field_lessee_employer_phone',
      7 => 'field_lessee_employer_income',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lessee-employer-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lessee_employer_details|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lessee|node|deal_management|form';
  $field_group->group_name = 'group_lessee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_customer_info';
  $field_group->data = array(
    'label' => 'Lessee',
    'weight' => '2',
    'children' => array(
      0 => 'field_address',
      1 => 'field_city',
      2 => 'field_date_of_birth',
      3 => 'field_email',
      4 => 'field_f_name',
      5 => 'field_l_name',
      6 => 'field_phone',
      7 => 'field_ssn',
      8 => 'field_state',
      9 => 'field_zip_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lessee field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lessee|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vehicle_info|node|deal_management|form';
  $field_group->group_name = 'group_vehicle_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vehicle Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_stock',
      1 => 'field_vin',
      2 => 'field_make',
      3 => 'field_model',
      4 => 'field_color',
      5 => 'field_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vehicle-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vehicle_info|node|deal_management|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vehicle|node|deal_management|default';
  $field_group->group_name = 'group_vehicle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deal_management';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vehicle',
    'weight' => '2',
    'children' => array(
      0 => 'field_color',
      1 => 'field_make',
      2 => 'field_model',
      3 => 'field_stock',
      4 => 'field_vin',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Vehicle',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-vehicle field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_vehicle|node|deal_management|default'] = $field_group;

  return $export;
}
