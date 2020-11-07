#include<stdio.h>

int main(void){

    int n, i;
    int c, st;

    printf("Ingrese un numero: \n");
    if(!(st=scanf("%i", &n)))
        {
            fprintf( stderr, "%s\n", "ERROR DEL INGRESO!!!!" );
            return 1;
        }
    if(st == EOF)
        return 1;

    while ((c=getchar()) !='\n');
    
    if (n<=0){
        printf("Numero invalido.\n");
        return 1;
    }


    for ( i = 0; i <= n; i+=2)
        printf("%4i\n", i);

    return 0;
}