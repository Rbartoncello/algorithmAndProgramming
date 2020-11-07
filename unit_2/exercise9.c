#include <stdio.h>

#define MSG_USER_WELCOME "Ingrese el numero de creditos acumulados"
#define MSG_ERROR "ERROR!! al momento del ingreso de datos"

#define YEAR_FIRST_NAME "Primer año"
#define YEAR_SECOND_NAME "Segundo año"
#define YEAR_THIRD_NAME "Tercer año"
#define YEAR_FOURTH_NAME "Cuarto año"


#define CREDIT_FIRST 48+4
#define CREDIT_SECOND 48+4
#define CREDIT_THIRD 96+4
#define CREDIT_FOURTH 144+4 


typedef enum {
    YEAR_FIRST,
    YEAR_SECOND,
    YEAR_THIRD,
    YEAR_FOURTH
} year_t;

int main(void){

    year_t year;
    int st, c;
    int num;

    printf("%s\n", MSG_USER_WELCOME);
    if (!(st=scanf("%i", &num))){
        fprintf(stderr, "%s\n", MSG_ERROR);
        return 1;
    }
    if (st == EOF)
    while ((c=getchar()) !='\n')

    if (num < CREDIT_FIRST){
        year = YEAR_FIRST;
    } if (num > CREDIT_SECOND) {
            year = YEAR_SECOND;
        } if (num > CREDIT_THIRD) {
                year = YEAR_THIRD;
            } if (num > CREDIT_FOURTH)
                    year = YEAR_FOURTH;

    switch (year) {
        case YEAR_FIRST:
            printf("%s\n", YEAR_FIRST_NAME);
            break;
        case YEAR_SECOND:
            printf("%s\n", YEAR_SECOND_NAME);
            break;
        case YEAR_THIRD:
            printf("%s\n", YEAR_THIRD_NAME);
            break;
        case YEAR_FOURTH:
            printf("%s\n", YEAR_FOURTH_NAME);
            break;
    }

    return 0;
}