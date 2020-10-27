#include<stdio.h>

int main(void){

    int n, i;

    printf("Ingrese un numero: \n");
    scanf("%i", &n);

    if (n<=0){
        printf("Numero invalido.\n");
        return 1;
    }


    for ( i = 1; i <= n; i+=2)
        printf("%i\n", i);


    return 0;
}