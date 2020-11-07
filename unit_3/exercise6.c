#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 100

int main(void){
    char source[MAX_STR]="Hola Mundo 1";
    char destination1[MAX_STR]="Hello World";
    char destination2[MAX_STR];
    size_t i, j;


    for(i=0;(destination2[i]=source[i])!='\0';i++);

    for(j=i;(destination2[j]=destination1[j-i]);j++);

        

    /* for(i=0;source[i]!='\0';i++)
        destination[i]=source[i]; */

    puts(source);
    puts(destination1);
    puts(destination2);


    return 0;
}