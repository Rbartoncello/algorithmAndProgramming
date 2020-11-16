#include <stdio.h>


typedef enum {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} month_t;

int main(void){
    month_t months;

    char *months_arr[]={
        "",
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre",
    };

    for (months = JAN; months <= DEC; months++)
        printf("%u\t%s\n", months, months_arr[months]);


    return 0;
}