#include <math.h>
#include <stdio.h>

#define USER_MSJ_ENTER_MAX "Ingrese el Nro de la catidad de numeros"
#define USER_MSJ_ENTER_NUMBER "Ingrese el los numeros"

#define USER_MSJ_ENTER_AVERAGE "El promedio artimeticos es: "
#define USER_MSJ_ENTER_DESVIATION "La desviacion standard es: "

#define ERROR_MSJ_ENTER_NO_NUMERIC "ERROR!!! Dato ingresado NO numerico."
#define ERROR_MSJ_NULL_POINTER "ERROR!!! array nulo."

#define MAX_NUMBERS 10

typedef enum {
    OK,
    ERROR_NULL_POINTER
} status_t;

status_t calcule_max(double [], size_t);
status_t calcule_min(double [], size_t);

int main(void){
    double str[MAX_NUMBERS];
    int i, c, st;
    size_t max_num;
    double number;

    puts(USER_MSJ_ENTER_MAX);
    if(!(st=scanf("%lu", &max_num))){
        fprintf(stderr, "%s\n", ERROR_MSJ_ENTER_NO_NUMERIC);
        return 1;
    }
    if(st == EOF)
        return 1;
    while((c=getchar()) !='\n');

    for (i = 0; i <= (max_num - 1); i++)
    {
        fprintf(stdin, "%s\n", USER_MSJ_ENTER_NUMBER);
        if(!(st=scanf("%lf", &number))){
            fprintf(stderr, "%s\n", ERROR_MSJ_ENTER_NO_NUMERIC);
            return 1;
        }
        if(st == EOF)
            return 1;
        while((c=getchar()) !='\n');

        str[i] = number;
    }
    for (i = 0; i <= (max_num - 1); i++)
    {
        printf ("%.02f\t", str[i]);
    }
    putchar('\n');
    
    if(calcule_max(str, max_num) != OK){
        fprintf(stderr, "%s\n", ERROR_MSJ_NULL_POINTER);
        return 1;
    }
    if(calcule_min(str, max_num) != OK){
        fprintf(stderr, "%s\n", ERROR_MSJ_NULL_POINTER);
        return 1;
    }

    return 0;
}

status_t calcule_max(double s[], size_t m){
    double max;
    int i;

    max = s[0];

    for (i = 1; i <= (m - 1); i++)
    {
        if (s[i] > max)
            max = s[i];
    }
    printf("MAX: %0.2f\n", max);

    return OK;
}

status_t calcule_min(double s[], size_t m){
    double min;
    int i;

    min = s[0];

    for (i = 1; i <= (m - 1); i++)
    {
        if (s[i] < min)
            min = s[i];
    }
    printf("Min: %0.2f\n", min);

    return OK;
}