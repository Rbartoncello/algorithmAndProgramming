#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 100
#define N 7

int main(void){
    char source[MAX_STR]="Hola Mundo 1";
    char destination1[MAX_STR];
    size_t i;


    for(i=0;(destination1[i]=source[i])!='\0' && i <=N ;i++);


        

    /* for(i=0;source[i]!='\0';i++)
        destination[i]=source[i]; */

    puts(source);
    puts(destination1);


    return 0;
}