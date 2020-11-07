#include<stdio.h>

int main(void){

    int num, i;
    int cuenta_cero=0,
        cuenta_uno=0,
        cuenta_dos=0,
        cuenta_tres=0,
        cuenta_cuatro=0,
        cuenta_cinco=0,
        cuenta_seis=0,
        cuenta_siete=0,
        cuenta_ocho=0,
        cuenta_nueve=0;


        for (i=0; i<1000; i+=1)
        {
            num=rand()%10;
            switch (num)
            {
            case 0:
                cuenta_cero+=1;
                break;
            case 1:
                cuenta_uno+=1;
                break;
            case 2:
                cuenta_dos+=1;
                break;
            case 3:
                cuenta_tres+=1;
                break;
            case 4:
                cuenta_cuatro+=1;
                break;
            case 5:
                cuenta_cinco+=1;
                break;
            case 6:
                cuenta_seis+=1;
                break;
            case 7:
                cuenta_siete+=1;
                break;
            case 8:
                cuenta_ocho+=1;
                break;
            case 9:
                cuenta_nueve+=1;
                break;
            default:
                break;
            }
        }
    printf("El numero cero se repitio %i:\n", cuenta_cero);
    printf("El numero uno se repitio %i:\n", cuenta_uno);
    printf("El numero dos se repitio %i:\n", cuenta_dos);
    printf("El numero tres se repitio %i:\n", cuenta_tres);
    printf("El numero cuatro se repitio %i:\n", cuenta_cuatro);
    printf("El numero cinto se repitio %i:\n", cuenta_cinco);
    printf("El numero seis se repitio %i:\n", cuenta_seis);
    printf("El numero siete se repitio %i:\n", cuenta_siete);
    printf("El numero ocho se repitio %i:\n", cuenta_ocho);
    printf("El numero nueve se repitio %i:\n", cuenta_nueve);
    return 0;
}