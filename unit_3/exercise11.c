#include <stdio.h>
#include <ctype.h>

#define MAX_STR 100



int main (void) {
    char str[]={
        "Mucho Texto jaJAjaJAjaj"
    };
    char strup[MAX_STR], strlow[MAX_STR];

    int i;

    printf("Primero como se ve la cadena antes de la modificacion: \n\t%s\n", str);

    for (i = 0; str[i] != '\0'; ++i)
    {
        strlow[i] = tolower(str[i]);
        strup[i] = toupper(str[i]);
        
    }
    printf("Ahora como se ve la cadena luego de la modificacion: %s\n", strlow);

    printf("Ahora como se ve la cadena luego de la modificacion: %s\n", strup);


    return 0;
}