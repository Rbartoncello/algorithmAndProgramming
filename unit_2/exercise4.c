#include<stdio.h>

#define CELSIUS_ID 1
#define FAHRENHEIT_ID 2

#define CELSIUS_NAME "Celsius"
#define FAHRENHEIT_NAME "Fahrenheit"

typedef enum {
    CELSIUS, 
    FAHRENHEIT
} scale_t;

typedef float date_t;

int main(void)
{
    scale_t result;
    date_t total;
    int num, option;
    int c, st;

    printf("Ingrese la unidad que quiere averigurar:\n");
    printf("%d - %s\n", CELSIUS_ID, CELSIUS_NAME);
    printf("%d - %s\n", FAHRENHEIT_ID, FAHRENHEIT_NAME);

    if(!(st=scanf("%i", &option)))
        {
            fprintf(stderr, "%s\n", "ERROR AL INGRESO DE DATOS");
            return 1;
        }
    if (st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    printf("Ingrese un numero:\n");
    
    if(!(st=scanf("%i", &num)))
        {
            fprintf(stderr, "%s\n", "ERROR! El dato ingresado NO es correcto");
            return 1;
        }
    if(st==EOF)
        return 1;
    while((c=getchar()) !='\n');

    switch (option)
    {
    case CELSIUS_ID:
        result = CELSIUS;
        break;
    default:
        result = FAHRENHEIT;
        break;
    }

    switch (result)
    {
        case CELSIUS:
        total = (num - 32) * (float) 5/9;
        printf("%4i %s son %f %s\n", num, FAHRENHEIT_NAME, total, CELSIUS_NAME);
        break;
        default:
        total = (num * (float) 9/5) + 32;
        printf("%4i %s son %f %s\n", num, CELSIUS_NAME , total, FAHRENHEIT_NAME);
        break;
    }


    return 0;
}