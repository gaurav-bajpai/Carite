<?php
/**
 * @file
 * carite_feeds_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function carite_feeds_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'deal_importer';
  $feeds_importer->config = array(
    'name' => 'Deal Importer',
    'description' => 'Import all deals.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv xml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'acc_no',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'acc_no',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'field_lessee_employer_address',
            'target' => 'field_lessee_employer_address',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'field_co_lessee_employer_address',
            'target' => 'field_co_lessee_employer_address',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_co_lessee_address',
            'target' => 'field_co_lessee_address',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_address',
            'target' => 'field_address',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_advance',
            'target' => 'field_advance',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'field_cpi',
            'target' => 'field_cpi',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'field_co_lessee_employer_city',
            'target' => 'field_co_lessee_employer_city',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'field_co_lessee_city',
            'target' => 'field_co_lessee_city',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'field_lessee_employer_city',
            'target' => 'field_lessee_employer_city',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'field_city',
            'target' => 'field_city',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'field_color',
            'target' => 'field_color',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'field_date_funded_start',
            'target' => 'field_date_funded:start',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'field_co_lessee_date_of_birth_start',
            'target' => 'field_co_lessee_date_of_birth:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'field_date_of_birth_start',
            'target' => 'field_date_of_birth:start',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'field_date_received_start',
            'target' => 'field_date_received:start',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'field_co_lessee_email',
            'target' => 'field_co_lessee_email',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'field_email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'field_lessee_employer',
            'target' => 'field_lessee_employer',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'field_co_lessee_employer',
            'target' => 'field_co_lessee_employer',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'field_f_name',
            'target' => 'field_f_name',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'field_co_lessee_f_name',
            'target' => 'field_co_lessee_f_name',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'field_l_name',
            'target' => 'field_l_name',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'field_co_lessee_l_name',
            'target' => 'field_co_lessee_l_name',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'field_location',
            'target' => 'field_location',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'field_make',
            'target' => 'field_make',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'field_model',
            'target' => 'field_model',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'field_co_lessee_employer_income',
            'target' => 'field_co_lessee_employer_income',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'field_lessee_employer_income',
            'target' => 'field_lessee_employer_income',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'field_contract_monthly_income',
            'target' => 'field_contract_monthly_income',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'field_co_lessee_employer_phone',
            'target' => 'field_co_lessee_employer_phone',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'field_lessee_employer_phone',
            'target' => 'field_lessee_employer_phone',
            'unique' => FALSE,
          ),
          33 => array(
            'source' => 'field_dealer_phone',
            'target' => 'field_dealer_phone',
            'unique' => FALSE,
          ),
          34 => array(
            'source' => 'field_co_lessee_phone',
            'target' => 'field_co_lessee_phone',
            'unique' => FALSE,
          ),
          35 => array(
            'source' => 'field_phone',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          36 => array(
            'source' => 'field_lessee_employer_position',
            'target' => 'field_lessee_employer_position',
            'unique' => FALSE,
          ),
          37 => array(
            'source' => 'field_co_lessee_employer_pos',
            'target' => 'field_co_lessee_employer_pos',
            'unique' => FALSE,
          ),
          38 => array(
            'source' => 'field_co_lessee_ssn',
            'target' => 'field_co_lessee_ssn',
            'unique' => FALSE,
          ),
          39 => array(
            'source' => 'field_ssn',
            'target' => 'field_ssn',
            'unique' => FALSE,
          ),
          40 => array(
            'source' => 'field_sales_manager',
            'target' => 'field_sales_manager',
            'unique' => FALSE,
          ),
          41 => array(
            'source' => 'field_sales_person',
            'target' => 'field_sales_person',
            'unique' => FALSE,
          ),
          42 => array(
            'source' => 'field_service_contract',
            'target' => 'field_service_contract',
            'unique' => FALSE,
          ),
          43 => array(
            'source' => 'field_co_lessee_employer_state',
            'target' => 'field_co_lessee_employer_state',
            'unique' => FALSE,
          ),
          44 => array(
            'source' => 'field_state',
            'target' => 'field_state',
            'unique' => FALSE,
          ),
          45 => array(
            'source' => 'field_co_lessee_state',
            'target' => 'field_co_lessee_state',
            'unique' => FALSE,
          ),
          46 => array(
            'source' => 'field_lessee_employer_state',
            'target' => 'field_lessee_employer_state',
            'unique' => FALSE,
          ),
          47 => array(
            'source' => 'field_deal_status',
            'target' => 'field_deal_status',
            'unique' => FALSE,
          ),
          48 => array(
            'source' => 'field_stipulation',
            'target' => 'field_stipulation',
            'unique' => FALSE,
          ),
          49 => array(
            'source' => 'field_stock',
            'target' => 'field_stock',
            'unique' => FALSE,
          ),
          50 => array(
            'source' => 'field_term',
            'target' => 'field_term',
            'unique' => FALSE,
          ),
          51 => array(
            'source' => 'field_vin',
            'target' => 'field_vin',
            'unique' => FALSE,
          ),
          52 => array(
            'source' => 'field_year',
            'target' => 'field_year',
            'unique' => FALSE,
          ),
          53 => array(
            'source' => 'field_co_lessee_employer_zipcode',
            'target' => 'field_co_lessee_employer_zipcode',
            'unique' => FALSE,
          ),
          54 => array(
            'source' => 'field_co_lessee_zip_code',
            'target' => 'field_co_lessee_zip_code',
            'unique' => FALSE,
          ),
          55 => array(
            'source' => 'field_zip_code',
            'target' => 'field_zip_code',
            'unique' => FALSE,
          ),
          56 => array(
            'source' => 'field_lessee_employer_zip_code',
            'target' => 'field_lessee_employer_zip_code',
            'unique' => FALSE,
          ),
          57 => array(
            'source' => 'field_date_funded_end',
            'target' => 'field_date_funded:end',
            'unique' => FALSE,
          ),
          58 => array(
            'source' => 'field_date_received_end',
            'target' => 'field_date_received:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'deal_management',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['deal_importer'] = $feeds_importer;

  return $export;
}
