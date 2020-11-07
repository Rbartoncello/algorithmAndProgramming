#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 100

int main(void) {
    char s[MAX_STR]="HOLA";

    if (s[0]=='\0')
    {
        puts("Candena vacia");
    }

    if(strcmp(s,"")==0)
        puts("Cadena Vacia");

    return 0;
}