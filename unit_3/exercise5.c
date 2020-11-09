#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 100

int main(void){
    char string[MAX_STR] = "Como estas? Mi nombre es Ricardo";

    size_t len, i;

    len = strlen(string);
    while (string[i] != '\0')
        ++i;
    
    

    printf("La longitud de caractes usando strlen: %ld\n", len);
    printf("La longitud de caractes usando un while: %ld\n", i);

    return 0;
}