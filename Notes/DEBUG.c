#include<stdio.h>
#define DEBUG //otra forma de hacerlo es gcc -o DEBUG DBUC.c -DDEBUG

int main(void){
    #ifdef DEBUG
        printf("DEBUGGUNG \n");
    #endif

    printf("Hello World \n");

    return 0;
}