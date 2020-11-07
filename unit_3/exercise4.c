#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STR 100

int main(void) {
    char s[MAX_STR]="Hola Mundo";
/*                   0123456789
                     1234567891
     */
    size_t len, j, i=0;

    len=strlen(s);
    printf("Len 1: %ld\n", len);

    while (s[i]!='\0')
        ++i;    
    
    printf("Len 2: %ld\n", i);

    for(j=len; j > 0;j--)
        putchar(s[j-1]);
    putchar('\n');

    return 0;
}