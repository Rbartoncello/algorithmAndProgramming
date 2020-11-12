#include <stdio.h>
#include <string.h>

#define MAX_STR 165
#define MSG_USER "Ingrese un numero: "
#define MSG_NUM_HEX "El numero en base hexdecimal es:"
#define MSG_ERROR "ERROR!! Al ingreso de entero"

int main(void){
    char str[MAX_STR];
    long int decimalNumber;
    int c, st;

    puts(MSG_USER);
    if(!(st=scanf("%li", &decimalNumber)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 0;
        }
    if(st==EOF)
        return 0;
    while((c=getchar())!='\n');

    puts(MSG_NUM_HEX);
    sprintf(str,"%lX",decimalNumber); 
	
	puts(str);

    return 0;

}