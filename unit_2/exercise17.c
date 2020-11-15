#include <stdio.h>

#define DEBUG

/* #ifdef DEBUG
    fprintf(stderr,"%s\n", "DEBUGing.....");
#endif */

int main(void){

    #ifdef DEBUG
    fprintf(stderr,"%s\n", "DEBUGing.....");
    #endif


    printf("hello world\n");

    return 0;
}
