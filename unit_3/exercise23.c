#include <stdio.h>
#include <string.h>

#define MAX_STR 25
#define MSG_USER "Ingrese un numero: "
#define MSG_NUM_OCT "El numero en base octal es:"
#define MSG_ERROR "ERROR!! Al ingreso de entero"

int main(void){
    char str[MAX_STR];

    size_t num;
    int c, st;
    int oct_num, i=1;

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
            oct_num += (num % 8) * i;
            num /= 8;
            i *= 10;
        };

    puts(MSG_NUM_OCT);
    sprintf(str, "%d", oct_num);

    puts(str);

    return 0;

}