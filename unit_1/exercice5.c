#include<stdio.h>
#include<math.h>

int main(void){

    int num;
    double root, reverse;
    int c, st;

    printf("Ingrese un numero: \n");
    if (! (st=scanf("%i", &num)))
        {
            fprintf(stderr, "%s\n" , "ERROR AL INGRESO DE NUMERO");
            return 1;
        }
    if (st == EOF)
        {
            return 1;
        }
    while ((c=getchar()) !='\n' );

    if (num > 0)
        {
            root = sqrt(num);
            reverse = pow(num, -1);
            printf("La raiz cuadrada de %d es: %.2f\nEl inverso de %d es: %0.2f\n", num, root, num, reverse);
        } if (num == 0)
            {
                printf("No existe la inversa de 0\n");
            } else
                {
                    printf("No se puede calcular la raiz cuadrada de un numero negativo\n");

                }
            
    
    
    

    return 0;
}