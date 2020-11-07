#include<stdio.h>

int main(void){

    float average;
    int counter, total, grade, max;
    int st, c;

    total= 0;

    printf("Ingrese el numero de la cantidad de notas: \n");
    if (!(st=scanf("%i", &max)))
        {
            fprintf( stderr, "%s\n", "ERROR NUMERO INVALIDO!!!!");
            return 1;
        }
    if (st == EOF)
        return 1;
    while((c=getchar()) !='\n');

    if(max == 0)
    {
        printf("A puesto que la cantidad de notas es 0, vuela a escribirlo\n");
        return 1;
    }
    
    for (counter=1; counter <= max; counter++)
    {
        printf("Ingrese nota: \n");
        
        if (!(st=scanf("%d", &grade)))
            {
                fprintf( stderr, "%s\n", "ERROR NUMERO INVALIDO!!!!");
                return 1;
            }
       
        if (st == EOF)
            return 1;
        
        while((c=getchar()) !='\n');

        total+=grade;
    }

    if(total != 0) {
    average= (float) total/max;
    printf("El promedio de notas es:%.2f\n", average);
    }
    else {
        printf("No fue ingresado ninguna nota!\n");
    }
    return 0;

}