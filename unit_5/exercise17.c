#include <stdio.h>
#include "english.c"

#define ERROR_MSJ_NULL_ARRAY "ERROR!! array nulo"

extern char *monthsEnglish[];

typedef enum {
    OK,
    ERROR_NULL_POINTER
} status_t;

typedef enum {
    JAN,
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

status_t get_month_str (month_t, char *[], char *[]);

int main (void){

    month_t months;

    char *monthsName[] = {  "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                            "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    if (get_month_str (months, monthsName, monthsEnglish)!= OK) {
      fprintf(stderr, "%s\n", ERROR_MSJ_NULL_ARRAY);
      return 1;
    }

    return 0;
}

status_t get_month_str (month_t m_t, char *m[], char *m_e[]){

    if(m == NULL || m_e == NULL)
        return ERROR_NULL_POINTER;

    for (m_t = JAN; m_t <= DEC; m_t++)
    {
        printf("%2d%11s%11s\n", m_t + 1, m[m_t], m_e[m_t]);
    }
    putchar('\n');
    
    return OK;
}