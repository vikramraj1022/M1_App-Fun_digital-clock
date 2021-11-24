#include <time.h>

struct tm getTime(){

    //declare the current time value
    time_t curTime;

    //init timer
    time(&curTime);

    //instantiate time obj which is an empty a pointer for the obj
    struct tm *timeObjPtr;

    //populate obj with localtime method
    timeObjPtr = localtime(&curTime);

    //return the value of the time obj
    return *timeObjPtr;

};