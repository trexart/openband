<?php
/**
 * @file
 * Enables modules and site configuration for a OpenBand site installation.
 */
/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function openband_form_install_configure_form_alter(&$form, $form_state) {
	// Pre-populate the site name with the server name.
	$form['site_information']['site_name']['#default_value'] = 'Awesome OpenBand';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'AU';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Australia/Sydney';
}
