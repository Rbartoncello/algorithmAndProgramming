#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MSG_USER_1 "Ingrese un numero del tipo flotante"
#define MSG_USER_2 "Ingrese un numero del tipo entero"
#define MGS_ERROR "ERROR!! al ingreso de datos"
#define MSG_INT "El valor del numero ingresado es: "

#define MAX_STR 100

int main(void){
    float f;
    int st, c, i;
    char str[MAX_STR];

    puts(MSG_USER_1);
    if(!(st=scanf("%f", &f)))
        {
            fprintf(stderr, "%s\n", MGS_ERROR);
            return 1;
        }
    if(st==EOF)
        {
            return 1;
        }
    while((c=getchar()) !='\n');
    puts(MSG_USER_2);
    if(!(st=scanf("%i", &i)))
        {
            fprintf(stderr, "%s\n", MGS_ERROR);
            return 1;
        }
    if(st==EOF)
        {
            return 1;
        }
    while((c=getchar()) !='\n');

    sprintf(str, "%s%.2f\n%s%i", MSG_INT, f, MSG_INT, i);
    puts(str);
    printf("\n");

    return 0;
}