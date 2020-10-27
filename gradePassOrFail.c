#include<stdio.h>

int main(void)
{
    int passes=0, failures=0, student=1, result;

    while (student <= 10)
    {
        printf("Ingrese nota(1=Aprobado o 2=Desaproba):");
        scanf("%i", &result);

        switch (result)
        {
        case 1:
            passes += 1;
            break;
        case 2:
            failures += 1;
            break;
        
        default:
            printf("Nro INCORRECTO\n");
            continue;
        }

        student += 1;
    }

    printf("Nro de aprobados: %d\n", passes);
    printf("Nro de desaprobados: %d\n", failures);

    if(passes >= 8)
    {
        printf("Aumente la colegiatura!\n");
    }
    
    return 0;
}