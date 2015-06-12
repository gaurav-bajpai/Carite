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
                    $classes = $vars['row_classes'][$k];
                    unset($vars['row_classes'][$k]);
                    $vars['row_classes'][$k][0] = $row->nid;
                    $vars['row_classes'][$k][1] = "edited_by_other";
                    foreach ($classes as $c_key => $c_value) {
                      $vars['row_classes'][$k][] = $c_value;
                    }
                }
            }
        }
    }
}
