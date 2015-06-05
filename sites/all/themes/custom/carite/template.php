<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Carite theme.
 */

/**
 * @file
 * template.php
 */
function carite_preprocess_views_view_table(&$vars) {
    if ($vars['view']->name == 'deal_management_summary' && $vars['view']->current_display == 'deal_management_summary') {
        drupal_add_css('.edited_by_other {background-color:peachpuff !important;}', array('type' => 'inline'));
        global $user;
        foreach ($vars['view']->result as $k => $row) {
            if (in_array('Underwriter', $user->roles)) {
                $nid = $row->nid;
                $cnt = _get_last_user_from_node($nid, TRUE);
                $uid = _get_last_user_from_node($nid);
                if ($user->uid != $uid && $cnt > 1) {
                    $vars['row_classes'][$k][] = "edited_by_other";
                    drupal_add_js(drupal_get_path('module', 'carite_common') . '/js/carite_common.js', 'file');
                }
            }
        }
    }
}
