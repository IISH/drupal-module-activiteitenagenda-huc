<?php
/**
 * @file
 * iishagenda_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iishagenda_event_views_default_views() {
	$export = array();

	$export['catering'] = view_catering();
//	$export['catering_history'] = view_catering_history();
	$export['clones'] = view_clones();
	$export['today_events'] = view_today_events();
	$export['upcoming_events'] = view_upcoming_events();
	$export['upcoming_flex'] = view_upcoming_flex();

	return $export;
}
