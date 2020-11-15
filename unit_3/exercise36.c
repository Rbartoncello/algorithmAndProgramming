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

int main(void){

    /*p(x)= ax⁴+bx³+cx²+dx+f= (((ax+b)x+c)x+d)x+f*/
    int coeft[MAX_COEFT];
    int grade, x, c, st, i, result;

    puts(MSG_USER_GRADE);
    if (!(st=scanf("%i", &grade)))
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
            if (!(st=scanf("%i", &coeft[i])))
                {
                    fprintf(stderr, "%s\n", MSG_ERROR_1);
                    return 1;
                }
            if ( st == EOF)
                return 1;
            while ((c=getchar()) !='\n');
        }

    puts(MSG_USER_X);
    if (!(st=scanf("%i", &x)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR_1);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    for (result = 0, i = 0; i < grade; i ++)
    {
        result = result * x + coeft[grade-i-1];
    }

    fprintf(stdout, "%s%i%s%i\n", MSG_USER_RESULT_1, x, MSG_USER_RESULT_2, result);




    return 0;
}

