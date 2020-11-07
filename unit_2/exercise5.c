#include<stdio.h>

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

int main(void){
    
    month_t month;

    int date, st, c;

    printf("Ingrese las siglas del mes:\n");
    if(!(st=scanf("%d", &date)))
        {
            fprintf(stderr, "%s\n", "Error al ingresar un dato");
            return 1;
        }
    if(st == EOF)
        return 1;
    while ((c=getchar()) !='\n');


    switch (date)
    {
    case 1:
        month = JAN;
        break;
    case 2:
        month = FEB;
        break;
    case 3:
        month = MAR;
        break;
    case 4:
        month = APR;
        break;
    case 5:
        month = MAY;
        break;
    case 6:
        month = JUN;
        break;
    case 7:
        month = JUL;
        break;
    case 8:
        month = AUG;
        break;
    case 9:
        month = SEP;
        break;
    case 10:
        month = OCT;
        break;
    case 11:
        month = NOV;
        break;
    case 12:
        month = DEC;
        break;
    }

    switch (month)
    {
    case JAN:
        printf("Enero\n");
        break;
    case FEB:
        printf("Febrero\n");
        break;
    case MAR:
        printf("Marzo\n");
        break;
    case APR:
        printf("Abril\n");
        break;
    case MAY:
        printf("Mayo\n");
        break;
    case JUN:
        printf("Junio\n");
        break;
    case JUL:
        printf("Julio\n");
        break;
    case AUG:
        printf("Agosto\n");
        break;
    case OCT:
        printf("Octubre\n");
        break;
    case NOV:
        printf("Noviembre\n");
        break;
    case DEC:
        printf("Diciembre\n");
        break;
    
    default:
        break;
    }
    
    return 0;
}