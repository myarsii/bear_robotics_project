#include <stdio.h>
#include <stdbool.h>

#include "cardReader.h"

// callback function from card detector
void card_detected(){
    set_status(STATUS_CARD_DETECTING);
}

// callback function card number reading
void card_reading(){
    set_status(STATUS_CARD_READING);
}

// callback function card reading error
void card_reading_error(){
    set_status(STATUS_CARD_READING_ERROR);
    set_error(ERROR_CARD_READING_FAIL);
}

// callback function card reading done
void card_reading_done(int no){
    set_status(STATUS_CARD_READING_DONE);
}