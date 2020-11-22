#include <stdio.h>
#include <math.h>

#define USR_MSJ_ENTER_X1 "Ingrese el valor de X1: "
#define USR_MSJ_ENTER_X2 "Ingrese el valor de X2: "
#define USR_MSJ_ENTER_Y1 "Ingrese el valor de Y1: "
#define USR_MSJ_ENTER_Y2 "Ingrese el valor de Y2: "

#define ERROR_MSJ_NO_VALID "ERROR!! el dato ingresado tiene que ser un numero."

#define USR_MSJ_CALCULE "La distacia a las coordenadas rectangulares de los puntos del plano es: "

float calcule_distance(float, float, float, float);

int main(void){
    float x1, y1, x2, y2;
    float distance = 0;
    int st, c;

    puts(USR_MSJ_ENTER_X1);
    if(!(st=scanf("%f", &x1))){
        fprintf(stderr, "%s/n", ERROR_MSJ_NO_VALID);
        return 1;
    }
    if(st == EOF){
        return 1;
    }
    while((c=getchar()) !='\n');
    puts(USR_MSJ_ENTER_X2);
    if(!(st=scanf("%f", &x2))){
        fprintf(stderr, "%s/n", ERROR_MSJ_NO_VALID);
        return 1;
    }
    if(st == EOF){
        return 1;
    }
    while((c=getchar()) !='\n');
    puts(USR_MSJ_ENTER_Y1);
    if(!(st=scanf("%f", &y1))){
        fprintf(stderr, "%s/n", ERROR_MSJ_NO_VALID);
        return 1;
    }
    if(st == EOF){
        return 1;
    }
    while((c=getchar()) !='\n');
    puts(USR_MSJ_ENTER_Y2);
    if(!(st=scanf("%f", &y2))){
        fprintf(stderr, "%s/n", ERROR_MSJ_NO_VALID);
        return 1;
    }
    if(st == EOF){
        return 1;
    }
    while((c=getchar()) !='\n');
    
    distance = calcule_distance(x1, x2, y1, y2);

    fprintf (stdout, "%s%f\n", USR_MSJ_CALCULE, distance);

    return 0;
}

float calcule_distance(float i1, float i2, float j1, float j2){
    

    return sqrt(((i2 - i1) * (i2 - i1)) + ((j2 - j1) * (j2 - j1)));

}

