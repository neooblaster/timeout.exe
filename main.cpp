/** -------------------------------- **/
/** --- Chargement des libraries --- **/
/** -------------------------------- **/
/** Library #01 **/
#include <stdio.h>
/**
    - stderr

/** Library #02 **/
#include <stdlib.h>
/**
    - atoi

/** Library #03 **/
#include <time.h>
/**
    - clock
**/

//#include <iostream>
//#include <stdint.h>
//#include <unistd.h>


using namespace std;

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main(int argc, char **argv)
{
    /** Variable pour conversion **/
    long int delay;

    /** 0 = self, 1 = delay, 2 = command **/
    if(argc != 3){
        fprintf(stderr, "Usage timeout.exe <delay> <command>\n", argv[0]);
        return 1;
    } else {
        // Conversion
        delay = atoi(argv[1]);
        // Wait
        sleep(delay * 1000);
        // Execute
        system(argv[2]);
        return 0;
    }
}
