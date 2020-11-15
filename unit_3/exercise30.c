#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_STR 100
#define MSG_USER_1 "Ingrese un numero"
#define MSG_USER_2 "Ingrese al numero de la cantidad de numeros que va a ingrasar"

#define MSG_AVERAGE "El promedio aritmético del conjunto de datos es: "
#define MSG_DETOUR "El desvío estándar del conjunto de datos es: "

#define MSG_ERROR "ERROR!! al ingreso del dato numerico"
#define MSG_ERROR_2 "ERROR!! no se puede analizar un numero negativo de elementos"

int main(void){
    char vector[MAX_STR];
    int sum = 0, i=0, N, Xi;
    float X=0, sum_int=0, o=0, inter=0;
    int st, c;

    puts(MSG_USER_2);
    if (!(st=scanf("%i", &N)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');
    if( N < 0 )
	{
		fprintf(stderr,"%s\n", MSG_ERROR_2);
		return 1;
	}


    while (i < N)
        {
            puts(MSG_USER_1);
            if (!(st=scanf("%i", &Xi)))
                {
                    fprintf(stderr, "%s\n", MSG_ERROR);
                    return 1;
                }
            if ( st == EOF)
                return 1;
            while ((c=getchar()) !='\n');
            vector[i]=Xi;
            sum += Xi;
            i++;
        }

    X = (float) sum/N;
    puts(MSG_AVERAGE);
    fprintf(stdout, "%55.3f\n", X);

    i = 0;

    while (i < N)
        {   
            sum_int =( (vector[i] - X) * (vector[i] - X) );
            inter += sum_int;
            i++;
        }
    o = (float) sqrt( (float) inter/N);
    puts(MSG_DETOUR);
    fprintf(stdout, "%54.2f\n", o);

    return 0;
}