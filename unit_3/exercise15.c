#include <stdio.h>
#include <string.h>

#define MSG_WELCOME_USER "Ingrese un texto"

#define MAX_STR 100

int main(void){
    char str[MAX_STR];
    size_t i=0, j=0;

    puts(MSG_WELCOME_USER);
    fgets(str, sizeof(str)+2, stdin);

    while (str[j] == ' ')
        {
            j++;
        }
    while (str[i] !='\0')
        {
            str[i]=str[j];
            i++;
            j++;
        }

    puts(str);
    
    return 0;

}