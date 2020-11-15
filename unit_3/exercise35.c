#include <stdio.h>
#include <math.h>
#include <string.h>

#define MSG_USER_1 "Intrese la amplitud de pico de la onda senoidal"
#define MSG_USER_2 "Ingrese la frecuencia de la onda senoidal (en Hz)"
#define MSG_USER_3 "Ingrese la fase inicial en radianes"
#define MSG_USER_4 "El resultado de la ecuacion de onda en "
#define MSG_USER_5 " es: "

#define MSG_ERROR "ERROR!! dato ingresado NO numerico"

#define PI 3.14
#define N 10

int main(void){
    double v[N];
    double a, f, fi;
    int i, c, st;
    FILE *fp;

    fp = fopen ( "test.xlsx", "w+" );

    puts(MSG_USER_1);
    if (!(st=scanf("%lf", &a)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');
    puts(MSG_USER_2);
    if (!(st=scanf("%lf", &f)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');
    puts(MSG_USER_3);
    if (!(st=scanf("%lf", &fi)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    for (i = 0; i <= (N - 1); i++)
        {
            v[i] = a * sin((2 * PI * f * i) + fi);
            fprintf(stdout, "%2s%i%s\t%.4f\n ",MSG_USER_4, i, MSG_USER_5, v[i]);
            fprintf(fp, "%s\t%i\t%s\t%.4f\n ",MSG_USER_4, i, MSG_USER_5, v[i]);
        }
    
 	fprintf(fp, "%s", "\nEsto es otro texto dentro del fichero.");
 	
 	fclose ( fp );

    return 0;
}

