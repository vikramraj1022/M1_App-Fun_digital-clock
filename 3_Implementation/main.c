#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
// #include <errno.h>
// #include <string.h>
// #include <getopt.h>

#include "time.h"

#if defined(__unix__)
#define CLEARCMD "clear"
#else
#define CLEARCMD "cls"
#endif



int	main(int argc, char **argv)
{

    

    while (1)
    {
        //1 second delay
        sleep(1);

        //clear screen
        system(CLEARCMD);

        //get time
        struct tm time = getTime(); 

        //print time
        switch (time.tm_wday)
        {     
            case 0:
                printf("Sunday \n");
                break;

            case 1:
                printf("Monday \n");
                break;

            case 2:
                printf("Tuesday \n");
                break;

            case 3:
                printf("Wednesday \n");
                break;

            case 4:
                printf("thursday \n");
                break;

            case 5:
                printf("Friday \n");
                break;
                
            case 6:
                printf("Saturday \n");
                break;
        
            default:
                break;
        }

        printf("The current Time is  %d : %d : %d \n" , time.tm_hour, time.tm_min, time.tm_sec);

    }
    
    return 0;
}


