#include <stdio.h>
#include <string.h>

#define MSG_WELCOME_USER "Ingrese un texto"

#define MAX_STR 100

int main(void){
    char str[MAX_STR];
    size_t i;

    puts(MSG_WELCOME_USER);
    scanf("%s", str);
    puts(str);

    for (i = 0; str[i] !='\0'; i++)
    {
        if (str[i]==NULL)
            {
                str[i]=str[i+1];
            }
    }

    puts(str);
    
    return 0;

}