#include<stdio.h>

#define MSG_USER "Ingrese un numero"
#define MSG_ERROR "ERROR!! al ingresar el caracter"

typedef enum {
    AGUDO,
    RECTO,
    OPTUSO
} grade_t;

int main(void){
    
    grade_t grade;
    int num, st, c;

    printf("%s\n", MSG_USER);
    if(!(st=scanf("%i", &num)))
    {
        fprintf(stderr, "%s\n", MSG_ERROR);
        return 1;
    }
    if(st==EOF)
        return 1;
    while((c=getchar()) !='\n');

    if(num<90){
        grade=AGUDO;
    }   if(num == 90){
            grade=RECTO;
        } if (num > 90){
                grade=OPTUSO;
            }

    switch (grade){
        case AGUDO:
            printf("El angulo es agudo\n");
            break;
        case RECTO:
            printf("El angulo es recto\n");
            break;
        case OPTUSO:
            printf("El angulo es optuso\n");
            break;
    }



    
    return 0;
}