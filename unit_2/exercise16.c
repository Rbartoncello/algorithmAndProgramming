#include <stdio.h>
#define TRUE 0

int main(void){

    printf("%i\n", TRUE);

    #undef TRUE
    #define TRUE 1

    printf("%i\n", TRUE);



    return 0;
}