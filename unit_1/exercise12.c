#include<stdio.h>

int main(void){

    float i, max, min, number; 
    int st, c, acount;

    printf("Ingrese la cantidad de numeros a comparar: \n");
     if(!(st=scanf("%i", &acount)))
        {
            fprintf(stderr, "%s\n", "ERROR AL INGRESO DEL DATO");
            return 1;
        }    
    if (st==EOF)
        return 1;
    while  ((c=getchar()) !=  '\n' );
    
    for(i = 1; i <= acount; i++ )
    {
        printf("Ingrese un Nro: \n");
        if(!(st=scanf("%f", &number)))
            {
                fprintf(stderr, "%s\n", "ERROR AL INGRESO DEL DATO");
                return 1;
            }
        if (st==EOF)
            return 1;
        while  ((c=getchar()) !=  '\n' );
        if (i == 1)
        {
            min=max=number;
        }
        if (number < min)
        {
            min=number;
        }
        if (number > max)
        {
            max=number;
        }
    }
    printf("Maximo valor: %.3f\n", max);
    printf("Minimo valor: %.3f\n", min);


    return 0;
}
