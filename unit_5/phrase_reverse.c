#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

typedef enum {
    OK,
    ERROR_NULL_POINTER
} status_t;

status_t phrase_reverse(char []);

int main(void){

    char s[N] = "hola mundo feliz";
            /*   0123456789012345*/

    if(phrase_reverse(s) != OK){
        fprintf(stderr, "%s\n", "ERROR");
        return ERROR_NULL_POINTER;
    }
    puts(s);

    return 0;
}

status_t phrase_reverse(char s[]){

    if (s == NULL){
        return ERROR_NULL_POINTER;
    }

    memmove(s, &s[0], 3);

    return OK;
    
}