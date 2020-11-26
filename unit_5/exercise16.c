#include <stdio.h>
#include <string.h>
#include <math.h>

#define MSG_USER_COEFFICIENT  "Ingrese los coeficientes del polinomio"
#define MSG_USER_GRADE "Ingrese el grado del polinomio"
#define MSG_USER_X "Ingrese el valor de la x del polinomio"
#define MSG_USER_RESULT_1 "Resultado puntual del polinomio en x = "
#define MSG_USER_RESULT_2 " es: "

#define MSG_ERROR_1 "ERROR!! dato ingresado NO numerico"
#define MSG_ERROR_2 "El grado del polinomio es muy grande para este programa. Introduzca uno igual o menor a:"
#define ERROR_MSJ_NULL_POINTER "ERROR!! Array nulo"

#define MAX_COEFT 10
#define N 9

typedef enum {
    OK,
    ERROR_NULL_ARRAY
} status_t;

status_t sample_poli (
    double [],
    size_t ,
    double ,
    double ,
    double [],
    size_t );

int main(void){

    double coeft[MAX_COEFT], start = 1, finish = 9;
    size_t grade, c, st, i, acount = 0 ;

    double muestras[N];

    puts(MSG_USER_GRADE);
    if (!(st=scanf("%lu", &grade)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR_1);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    grade++;
    if (grade > MAX_COEFT)
        {
            fprintf(stderr, "%s%i\n", MSG_ERROR_2, MAX_COEFT);
            return 1;
        }
    
    for(i = 0; i < grade; i ++)
        {
            puts(MSG_USER_COEFFICIENT);
            if (!(st=scanf("%lf", &coeft[i])))
                {
                    fprintf(stderr, "%s\n", MSG_ERROR_1);
                    return 1;
                }
            if ( st == EOF)
                return 1;
            while ((c=getchar()) !='\n');
        }

    if(sample_poli(muestras, acount, start, finish, coeft, grade) != OK){
        fprintf(stderr, "%s\n", ERROR_MSJ_NULL_POINTER);
        return 1;
    }
    return 0;
}

status_t sample_poli(
    double mu[],
    size_t X,
    double s,
    double f,
    double c[],
    size_t g){
    int i, j;
    double result;

    for (X = s, j = 0; X <= f; j++, X++){
        for (result = 0, i = 0; i < g; i ++){
            result = result * X + c[g-i-1];
        }
        mu[j] = result;
    }

    for (j = 0; j <= (f - s) -1 ; j++){
        printf("%0.1f\n", mu[j]);
    }

    return OK;
}