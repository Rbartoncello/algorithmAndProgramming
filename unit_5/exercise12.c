#include <stdio.h>

#define ERROR_MSJ_NULL_ARRAY "ERROR!! array nulo"

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

status_t get_month_str (month_t, char *[]); 

int main (void){

    month_t months;

    char *monthsName[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    if (get_month_str (months, monthsName)!= OK) {
      fprintf(stderr, "%s\n", ERROR_MSJ_NULL_ARRAY);
      return 1;
    }

    return 0;
}

status_t get_month_str (month_t m_t, char *m[]){

    if(m == NULL)
        return ERROR_NULL_POINTER;

    for (m_t = JAN; m_t <= DEC; m_t++)
    {
        printf("%2d\11%s\n", m_t + 1, m[m_t]);
    }
    
    return OK;
}