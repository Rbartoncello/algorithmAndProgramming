#include <stdio.h>
#include <string.h>

#define MAX_STR 25
#define MSG_USER "Ingrese un numero: "
#define MSG_NUM_OCT "El numero en base binaria es:"
#define MSG_ERROR "ERROR!! Al ingreso de entero"

int main(void){
    char str[MAX_STR];

    size_t num;
    int c, st;
    int bin_num, i=1;

    puts(MSG_USER);
    if(!(st=scanf("%lu", &num)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 0;
        }
    if(st==EOF)
        return 0;
    while((c=getchar())!='\n');


    while (num != 0)
        {
            bin_num += (num % 2) * i;
            num /= 2;
            i *= 10;
        };

    puts(MSG_NUM_OCT);
    sprintf(str, "%d", bin_num);

    puts(str);

    return 0;

}