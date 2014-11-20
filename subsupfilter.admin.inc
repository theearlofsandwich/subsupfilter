<?php

/**
 * Page callback: Current posts settings
 *
 * @see current_posts_menu()
 */
function subsupfilter_form($form, &$form_state)
{

    $form['subsupfilter']['filterwords'] = array(
        '#type' => 'textarea',
        '#title' => t('Add text followed by html, one per line'),
        '#default_value' => variable_get('filterwords'),
    );

    return system_settings_form($form);
}
