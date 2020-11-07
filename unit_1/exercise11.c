#include<stdio.h>

int main(void)
{
    int x, a, b;
    int c , st;

    printf("Ingrese un numero entero positivo: \n");
    if (! (st=scanf("%i", &x)))
    {
        fprintf( stderr, "%s\n", "ERROR AL INGRESO DEL DATO");
        return 1;
    }
    if (st == EOF)
        return 1;
    while ((c=getchar() !='\n'));

    if ( x < 0)
        {
            printf("El numero ingreso tiene que ser positivo");
        } else
            {
                a = x / 10;
                b = x % 10;
                printf("El resultado es: %i%i\n", b, a);
            }
        


    return 0;
}