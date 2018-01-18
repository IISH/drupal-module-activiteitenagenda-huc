(function ($, Drupal, window, document, undefined) {


    var duration = determineDuration();
    var showed_changedate_msg = false;
    var current_rooms = new Array();

    Drupal.behaviors.iishagenda = {
        attach : function(context, settings) {

            var first = context[0];

            if(first && context[0].id.substring(0,4) =="edit"){
                $('#'+context[0].id).change(function(){
                    determineCatering();
                });
            }
        }
    };


    jQuery(document).ready(function($) {
        init();
    });


    function init(){
        setEventTimePicker();
        setCateringTimePicker();
        addListeners();

        // Disable clone field, used automatically
        $("#edit-field-clone-of-und-0-target-id").prop('disabled', true);
        $("#edit-field-clone-of-und-0-target-id").addClass("input-disabled");

//        $(".currentrooms").css("display","none");

        // clear rooms when none is checked (mainly for new events)
        if($('.field-name-field-event-room .form-checkbox:checked').length == 0){
            clear_rooms();
        }
    }



    /**
     * Set Event time pickers
     */
    function setEventTimePicker(){

        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').timepicker({
            'minTime': '07:30',
            'maxTime': '23:00',
            'timeFormat': 'H:i',
            'step': 15
        });

        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').timepicker({
            'minTime': '07:30',
            'maxTime': '23:00',
            'timeFormat': 'H:i',
            'step': 15
        });
    }


    function addListeners(){

        $('#edit-field-event-date-u' +
            'nd-0-value-timeEntry-popup-1').change(function(){
            var endtimefield = $('#edit-field-event-date-und-0-value2-timeEntry-popup-1');

            if(endtimefield.val() == "" || duration==0){

                var most_used_duration = Drupal.settings.most_used_duration *60; // minutes to seconds
                var nEndtime = convertToTime($(this).val())+most_used_duration;
                var dEnddate = new Date(nEndtime*1000);
                endtimefield.val(pad(dEnddate.getHours())+":"+pad(dEnddate.getMinutes()));

            }else{
                var nEndtime = convertToTime($(this).val())+duration;
                var dEnddate = new Date(nEndtime*1000);
                endtimefield.val(pad(dEnddate.getHours())+":"+pad(dEnddate.getMinutes()));
            }
        })

        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(function(){
            duration = determineDuration();
        })

        /**
         * Hide enddate but update when startdate changes
         */
        $('.form-item-field-event-date-und-0-value2-date').css("display","none");
        $("label[for='edit-field-event-date-und-0-value2']").html("tot");

        $('#edit-field-event-date-und-0-value-datepicker-popup-0').change(function(e) {
            $("#edit-field-event-date-und-0-value2-datepicker-popup-0").val($("#edit-field-event-date-und-0-value-datepicker-popup-0").val());
            onchange_date(this);
        });

        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(function(e){ onchange_date(this); });
        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(function(e){ onchange_date(this); });


        $('#edit-check').mousedown(function(){
            $('#edit-check').css("border","0px");

            if(showed_changedate_msg){
                showed_changedate_msg = false;
                $(".currentrooms").css("display","block");
            }else{
                $('.form-item-field-event-date-und-0-value2-date').css("display","none");
            }
        });


        /**
         *
         */
        if($('#node-event-form').length > 0 ){
            determineCatering();
            $('input#edit-field-people-und-0-value').change(function(e){
                determineCatering();
            });
        }

    }

    function determineCatering(){

        var $checkboxes = $('.form-item-field-event-room-und input[type="checkbox"]');
        var $issg = false;
        var $people = parseInt($('input#edit-field-people-und-0-value').val());

        $.each($checkboxes.filter(':checked'),function(i,v){
            $label = $(v).parent().find("label").text();
            if($label.indexOf('IISG') !== -1){
                $issg = true;
            }
        });

        if($issg || $people > 50){
            showCatering();
        }else{
            hideCatering();
        }

    }

    function showCatering(){
        $('.group-catering').show();
    }

    function hideCatering(){
        if($('.group-catering').is(':visible')){
           // $('.group-catering').hide();
        }
    }

    /**
     *  Set catering time pickers
     */
    function setCateringTimePicker(){

        $('.field-name-field-catering-time input').timepicker({
            'minTime': '07:30',
            'maxTime': '23:00',
            'timeFormat': 'H:i',
            'step': 15
        });

        $('#edit-field-catering-time-und-0-value').timepicker({
            'minTime': '07:30',
            'maxTime': '23:00',
            'timeFormat': 'H:i',
            'step': 15
        });
    }


    /**
     * On change event date
     * @param e
     */
    function onchange_date(e){
        var $checkboxes = $('.form-item-field-event-room-und input[type="checkbox"]');

        // if user is editing or a room is already set
        if($("body").hasClass('page-node-edit') || $checkboxes.filter(':checked').length > 0){
            show_alert();
            $(".ui-timepicker-wrapper").css("display","none");
            $('#edit-check').css("border","2px solid orange");

            clear_rooms();
        }
    }

    function show_alert(){
        if(!showed_changedate_msg){
            alert('Je verandert de datum/tijd. Klik op "Controleer beschikbaarheid" voor beschikbare zalen op deze nieuwe datum/tijd.');
            showed_changedate_msg = true;
        }
    }

    function clear_rooms(){
      // console.log("clear rooms");
        $( ".field-name-field-event-room input:checked" ).each(function( index ) {
            current_rooms.push($( this ).attr('id'));
        });
        $('.field-name-field-event-room .form-checkboxes').html("klik op 'Controleer beschikbaarheid' voor beschikbare zalen.");
    }



    /**
     *   Adds zero to number below 10
     */
    function pad( value) {
        if(value < 10) {
            return '0' + value;
        } else {
            return value;
        }
    }


    /**
     *   Calculates duration in seconds between start and endtime
     */
    function determineDuration(){
        var starttimefield = $('#edit-field-event-date-und-0-value-timeEntry-popup-1');
        var endtimefield = $('#edit-field-event-date-und-0-value2-timeEntry-popup-1');

        if(starttimefield.val() !== ""){
            startTimestamp = convertToTime(starttimefield.val());
            endTimestamp =convertToTime(endtimefield.val());
            duration =  (endTimestamp-startTimestamp);
        }else{
            duration = 0;
        }
        return duration;
    }

    /**
     *   convert time 12:23 into timestamp,
     */
    function convertToTime(nTime){
        if(nTime == NaN || nTime == undefined){
            return 0;
        }else{
            var today = new Date();
            var aTime = nTime.split(":");
            var d = new Date(today.getFullYear(),today.getMonth(),today.getDate(),aTime[0],aTime[1],0);
            var nTimestamp = Math.floor(d.getTime()/1000);
            return nTimestamp;
        }
    }



})(jQuery, Drupal, this, this.document);