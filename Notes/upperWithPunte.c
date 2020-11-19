#include <pthread.h>
#include <stdio.h>
#include <ctype.h>

int main (void) {
    char s[100]={
        "Mucho Texto jaJAjaJAjaj"
    };
    char *p;

    printf("Primero como se ve la cadena antes de la modificacion: \n\t%s\n", s);

    for (p = s; *p; p++)
        {
            *p = tolower(*p);
            printf("%p\n", (void*) p);
        }

    puts(s);
    printf("%p\n", (void*) p);
    
    return 0;
}