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
#define MSG_ERROR_3

#define MAX_COEFT 10

double evaluate_poli(const double coef[], size_t grade, double x);

int main(void){

    double coeft[MAX_COEFT], x;
    size_t grade, c, st, i, result;

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

    puts(MSG_USER_X);
    if (!(st=scanf("%lf", &x)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR_1);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    result = evaluate_poli(coeft ,grade,  x);

    fprintf(stdout, "%s%.1f%s%li\n", MSG_USER_RESULT_1, x, MSG_USER_RESULT_2, result);
    return 0;
}

double evaluate_poli(const double c[], size_t g, double X){
    int i;
    double result;

    for (result = 0, i = 0; i < g; i ++){
        result = result * X + c[g-i-1];
    }

    return result;
}