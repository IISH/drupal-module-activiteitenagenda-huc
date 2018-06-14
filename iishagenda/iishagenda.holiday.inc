<?php


/**
 * Get holidaynames for given item_id format: calendar-2018-06-08-date-box
 * @param $item_id
 * @return string
 */
function iishagenda_get_holiday($item_id){

  $id_array = explode('-',$item_id);
  $date_array = array_slice($id_array,1,3);
  $date = implode('-',$date_array).' 00:00:00';

  // check which holiday contains this day
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'holiday')
    ->fieldCondition('field_holiday_date', 'value', $date, '<=')
    ->fieldCondition('field_holiday_date', 'value2', $date, '>=');

  if(isset($_SESSION['location_id'])){
    $query->fieldCondition('field_holiday_locations', 'tid', $_SESSION['location_id']);
  }
  $results= $query->execute();
  $output = '';

  if(!empty($results['node'])){
    $holidays = node_load_multiple(array_keys($results['node']));

    foreach ($holidays as $holiday) {
      $holiday = entity_metadata_wrapper('node',$holiday);
      $output .= '<span class="holiday">'.$holiday->title->value()."</span>";
    }
  }

  return $output;
}


/**
 * Get closed locations between start- and enddate, optional location ids to narrow down results
 * @param $startdate
 * @param $enddate
 */
function iishagenda_get_closed_locations($startdate,$enddate,$location_ids = array()){
  $closed_locations = array();

  // Strip time, keep date  YYYY-MM-DD HH:MM:SS > YYY-MM-DD
  $startdate = substr($startdate,0,10);
  $enddate = substr($enddate,0,10);

  // Check which holiday contains this day
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'holiday')
    ->fieldCondition('field_holiday_date', 'value',$enddate , '<=')
    ->fieldCondition('field_holiday_date', 'value2', $startdate, '>=');

  $results= $query->execute();

  if(!empty($results['node'])){
    $holidays = node_load_multiple(array_keys($results['node']));

    foreach ($holidays as $holiday) {
      $holiday = entity_metadata_wrapper('node',$holiday);
      $locations = $holiday->field_holiday_locations->value();
      $date = $holiday->field_holiday_date->value();
      $hStart = date("d-m-Y", strtotime($date['value']));
      $hEnd = date("d-m-Y", strtotime($date['value2']));
      if($hStart == $hEnd){
        $period = 'op '.$hStart;
      }else{
        $period = 'van '.$hStart.' tot '.$hEnd;
      }

      if(is_array($locations)){
        foreach ($locations as $location) {
            $location_id = (int) $location->tid;
           if(count($location_ids) == 0 || in_array( $location_id, $location_ids)){
             $closed_locations[$location->tid] = array(
               'name'=>$location->name,
               'holiday'=>$holiday->title->value(),
               'period'=>$period
             );
           }
        }
      }
    }
  }

  return $closed_locations;
}