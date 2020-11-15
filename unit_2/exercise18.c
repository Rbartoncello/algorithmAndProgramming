#include<stdio.h>

#define MSG_ERROR "ERROR!! al ingreso de dato"

#define ENGLISH_ID 1
#define SPANISH_ID 2

#define ENGLISH_MGS_USER_WELCOME "Select your language"
#define SPANISH_MGS_USER_WELCOME "Seleccione su lenguaje"

enum month_t {
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
};

int main(void){
    
    enum month_t month;
    
    char *englishMonthName [] = {
        "",
        "January",
        "February",
        "Marth",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "Octover",
        "November",
        "December",
    };

    char *spanishMonthName [] = {
        "",
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiember",
        "Octubre",
        "Noviembre",
        "Diciembre",
    };


    int date, st, c;

    printf("\t%d)%s\n\t%d)%s\n", ENGLISH_ID, ENGLISH_MGS_USER_WELCOME, SPANISH_ID,SPANISH_MGS_USER_WELCOME);
    if(!(st=scanf("%d", &date)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if (st == EOF)
        return 1;
    while ((c=getchar()) !='\n');


    switch (date)
    {
    case 1:
        for (month = JAN; month <= DEC; month ++)
            printf("%2i%11s\n", month, englishMonthName[month]);
        break;
    case 2:
       for (month = JAN; month <= DEC; month ++)
            printf("%2i%11s\n", month, spanishMonthName[month]);
        break;
    }
    
    return 0;
}