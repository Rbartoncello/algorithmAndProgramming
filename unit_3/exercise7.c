#include <stdio.h>

#define MAX_STR 100

int main(void){
    char str[MAX_STR] = "Hola", str2[MAX_STR] = " Como estas?";

    int i=0, j;

    while (str[i] != '\0')
    {
        i++;
    }

    printf("%i\n",i);
    
    for (j=i; (str[j]=str2[j-i]); j++);

    puts(str2);
    puts(str);

    return 0;
}