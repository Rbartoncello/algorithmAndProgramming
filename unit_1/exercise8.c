#include<stdio.h>

int main(void){

    int fact, i , res;

    printf("Ingrese un numero: \n");
    scanf("%i", &fact);

    if (fact<0){
        printf("Numero invalido.\n");
        return 1;
    }

    res=1;

    for ( i = 1; i <= fact; i++)
    {
        res= res*i;
    }
    


/*     printf("Valor de facrial de %i es INVALIDO \n", fact);
 */    printf("El factorial es: %i \n", res);
    return 0;
}