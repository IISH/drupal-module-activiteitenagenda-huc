<?php

function admin_settings(){
    $form = array();

    $form['iishagenda_admin'] = array(
        '#type' => 'textfield',
        '#title' => t('Event administrator e-mail'),
        '#default_value' => variable_get('iishagenda_admin'),
        '#size' => 30,
        '#maxlength' => 30,
        '#field_prefix' => 'E-mail: ',
        '#description' => t("Type in the email of the event administrator. The event administrator receive email notifications upon event creation."),
        '#required' => TRUE,

    );

    return system_settings_form($form);
}
