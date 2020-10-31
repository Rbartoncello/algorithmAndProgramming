#include<stdio.h>
#define MAX_INPUT_VAL 5

int main(void){

    int i, max, min, number; 
    int st, c;

    

    for(i = 1; i <= MAX_INPUT_VAL; i++ )
    {
        printf("Ingrese un Nro: \n");
        if(!(st=scanf("%i", &number)))
            {
                fprintf(stderr, "%s\n", "ERROR AL INGRESO DEL DATO");
                return 1;
            }
        if (st==EOF)
            return 0;
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
    printf("Maximo valor: %i\n", max);
    printf("Minimo valor: %i\n", min);


    return 0;
}
