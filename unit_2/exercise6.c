#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MSG_USER "Ingrese un texto"

int main(void){
    char date;
    size_t len;

    printf("%s\n", MSG_USER);
    scanf("%s", &date);

    len=strlen(&date);
    printf("La cantidad de caracteres totales es: %lu\n", len);

    if(isalnum(date) == 0)
    {
        printf("No es alfanumerico\n");
        printf("La cantidad de caracteres no alfanumeticos es: %lu\n", len);

    } else
    {
        printf("Hay alguna letra o numero\n");
        printf("La cantidad de caracteres alfanumeticos es: %lu\n", len);
    }
    if(isdigit(date) == 0)
    {
        printf("Hay numeros y letra o solo letras\n");
    } else
    {
        printf("Solamente hay numeros\n");
        printf("La cantidad de caracteres numericos es: %lu\n", len);
    }

    

    
    return 0;
}