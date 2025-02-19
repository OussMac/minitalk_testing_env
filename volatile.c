#include "mt_lib.h"

//  cc -O3 volatile.c mt_lib.a  ==> compile with to turn on all optimizations.


// page 795
int ready = 0;
// volatile int ready = 0;

void handler(int signum)
{
    if (signum == SIGINT)
        ready = 1;
}

int main(void)
{
    signal(SIGINT, handler);
    printf("Kantsnaw ...\n");
    while(!ready){}  // changes to while (true){}
    printf("\nSafi Dzna.\n");
    return(EXIT_SUCCESS);
}