#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100
#define MSG_USER_1 "Ingrese un numero"
#define MSG_USER_2 "Ingrese al numero de la cantidad de numeros que va a ingrasar"
#define MSG_ERROR "ERROR!! al ingreso del dato numerico"
int main(void){
    char vector[MAX_STR];
    int sum = 0, i=0, n, st, c, num;

    puts(MSG_USER_2);
    if (!(st=scanf("%i", &n)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if ( st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    while (i < n)
        {
            puts(MSG_USER_1);
            if (!(st=scanf("%i", &num)))
                {
                    fprintf(stderr, "%s\n", MSG_ERROR);
                    return 1;
                }
            if ( st == EOF)
                return 1;
            while ((c=getchar()) !='\n');
            vector[i]=num;
            sum += num;
            i++;
        }

    i = 0;
    while(i < n)
        {
            printf("%d ", vector[i]);
            i++;
        }

    printf("\n%i\n", sum);

    return 0;
}