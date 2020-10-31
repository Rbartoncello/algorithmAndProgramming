#include<stdio.h>
#define SUM_ERROR 10E-9

int main(void){

    int N = 1;
    double e = 1;
    double invf = 1;

    while (invf > SUM_ERROR)
    {
        invf /= N;
        e += invf;
        N++;
    }

    printf("El valor del error es: %.10f\n", invf);
    printf("El valor de e es: %.10f\n", e);
    printf("El valor de N es: %d\n", N);
    
}