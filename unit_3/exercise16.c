#include <stdio.h>
#include <string.h>

#define MSG_WELCOME_USER "Ingrese un texto"

#define MAX_STR 100

int main(void){
    char str[MAX_STR];
    size_t i;

    puts(MSG_WELCOME_USER);
    fgets(str, sizeof(str)+2, stdin);

    for (i = 0 ; str[i] == '\0'; i++)
        {
            if (str[i] == ' ')
                {
                    str[i] = '\0';
                }
        }

    puts(str);
    
    return 0;

}