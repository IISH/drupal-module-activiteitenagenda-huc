(function ($, Drupal, window, document, undefined) {


    var duration = determineDuration();
    var showed_changedate_msg = false;
    var current_rooms = new Array();
    var current_status = null;

    Drupal.behaviors.iishagenda = {
        attach : function(context, settings) {

            setCateringTimePicker();
            var first = context[0];

            if(first && context[0].id.substring(0,4) =="edit"){
                $('#'+context[0].id).change(function(){
                    determineCatering();
                });
            }
        }
    };



    function init(){
        setEventTimePicker();
        setCateringTimePicker();
        addListeners();

        // Disable clone field, used automatically
        $("#edit-field-clone-of-und-0-target-id").prop('disabled', true);
        $("#edit-field-clone-of-und-0-target-id").addClass("input-disabled");

        // clear rooms when none is checked (mainly for new events)
        if($('.field-name-field-event-room .form-checkbox:checked').length == 0){
            clear_rooms();
        }

	    determineCatering();

        // Status
        current_status = $('#edit-field-event-status input[checked=checked]').attr('value');

        $('#edit-field-event-status input').change(function(){
            $('#edit-field-status-changed-by-und').val();
        });

        $('#edit-field-status-changed-by-und').attr('disabled','disabled');

        $("#edit-submit").click(function(e){
            e.preventDefault();
            var validCatering = checkCatering();

            if(!validCatering){
                if (confirm("Een aantal catering items hebben geen tijd, wil je voor deze items het aanvangs tijdstip van de reservering gebruiken?")) {
                    setCatering();
                    $("#event-node-form").submit();
                } else {
                    alert('Vul een tijd in voor de catering.');
                }
            }else{
                $(".node-event-form").submit();
            }

        });
    }

    function checkCatering(){
        var isValid = true;
        var $cateringItems = $('.field-name-field-catering-time input');
        if($cateringItems.length >1){
            $.each($cateringItems,function(i,input){
                var cat_time = $(input).val();
                if(cat_time.length !== 5){
                    isValid = false;
                }
            });
        }

        return isValid;
    }

    function setCatering(){
        var $cateringItems = $('.field-name-field-catering-time input');
        $.each($cateringItems,function(i,input){
            var cat_time = $(input).val();
            var event_time = $("input[name='field_event_date[und][0][value][time]']").val();
            if(cat_time.length !== 5){
                $(input).val(event_time);
            }
        });
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

        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(function(){
            var endtimefield = $('#edit-field-event-date-und-0-value2-timeEntry-popup-1');

            if(endtimefield.val() == "" || duration==0){

                var most_used_duration = Drupal.settings.most_used_duration *60; // minutes to seconds
                var nEndtime = convertToTime($(this).val())+most_used_duration;
                var dEnddate = new Date(nEndtime*1000);
                endtimefield.val(pad(dEnddate.getHours())+":"+pad(dEnddate.getMinutes()));

            } else {
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

        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(function(e){
            onchange_date(this);

	        // todogcux
            if ($('#edit-field-event-date-und-0-value-timeEntry-popup-1').val() == '') {
	            $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').val('');
            }

			disableEnableRoomCheckboxes();
        });
        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(function(e){
            onchange_date(this);
	        disableEnableRoomCheckboxes();
        });

        $('#edit-check').mousedown(function(){
            $('#edit-check').css("border","0px");

            if(showed_changedate_msg){
                showed_changedate_msg = false;
                $(".currentrooms").css("display","block");
            } else {
                $('.form-item-field-event-date-und-0-value2-date').css("display","none");
            }
        });

        if($('#node-event-form').length > 0 ){
            determineCatering();
            $('input#edit-field-people-und-0-value').change(function(e){
                determineCatering();
            });
        }

		// dirty
	    $('input#edit-field-locations-und-52').change(function(e){
		    determineCatering();
	    });
	    $('input#edit-field-locations-und-53').change(function(e){
		    determineCatering();
	    });
	    $('input#edit-field-locations-und-54').change(function(e){
		    determineCatering();
	    });
    }

    function determineCatering(){
	    var $isIisg = false;
	    var $isIisg2 = false;

		// if room IISG... is checked, show catering
        var $checkboxes = $('.form-item-field-event-room-und input[type="checkbox"]');
        //var $people = parseInt($('input#edit-field-people-und-0-value').val());
        $.each($checkboxes.filter(':checked'),function(i,v){
            $label = $(v).parent().find("label").text();
            if($label.indexOf('IISG') !== -1){
	            $isIisg = true;
            }
        });

		// if location IISG is checked, show catering
	    var $checkboxes2 = $('.form-item-field-locations-und input[type="checkbox"]');
	    $.each($checkboxes2.filter(':checked'),function(i,v){
		    $label = $(v).parent().find("label").text();
		    if($label.indexOf('IISG') !== -1){
			    $isIisg2 = true;
		    }
	    });

	    if($isIisg || $isIisg2){
            showCatering();
        } else {
            hideCatering();
        }
    }

    function showCatering(){
        $('.group-catering').show();
    }

    function hideCatering(){
        if($('.group-catering').is(':visible')){
             // waarom was de volgende regel uitgecomentarieerd?
             $('.group-catering').hide();
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
        if($("body").hasClass('page-node-edit') || $checkboxes.length > 0){
            show_alert();
            $(".ui-timepicker-wrapper").css("display","none");
            $('#edit-check').css("border","2px solid orange");

            clear_rooms();
        }
    }

	// todogcu DIRTY
	function disableEnableRoomCheckboxes() {
		if ($('#edit-field-event-date-und-0-value-timeEntry-popup-1').val() == '' || $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').val() == '' ) {
			$('#edit-field-event-room-und--2').hide();
			$('#edit-field-event-room-und--3').hide();
		} else {
			$('#edit-field-event-room-und--2').show();
			$('#edit-field-event-room-und--3').show();
		}
	}

    function show_alert(){
        if(!showed_changedate_msg){
            alert('Je verandert de datum/tijd. Klik op "Controleer beschikbaarheid" voor beschikbare zalen op deze nieuwe datum/tijd.');
            showed_changedate_msg = true;
        }
    }

    function clear_rooms(){
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
        } else {
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
        } else {
            var today = new Date();
            var aTime = nTime.split(":");
            var d = new Date(today.getFullYear(),today.getMonth(),today.getDate(),aTime[0],aTime[1],0);
            var nTimestamp = Math.floor(d.getTime()/1000);
            return nTimestamp;
        }
    }

    jQuery(document).ready(function($) {
        if($('.node-event-form').length > 0) init();
    });


})(jQuery, Drupal, this, this.document);