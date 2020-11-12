#include <stdio.h>
#include <string.h>

#define MSG_WELCOME_USER "Ingrese un texto"
#define MSG_WELCOME_C1_USER "Ingrese un caracter"
#define MSG_WELCOME_C2_USER "Ingre otro caracter"

#define MAX_STR 100

int main(void){
    char str[MAX_STR], char1[MAX_STR], char2[MAX_STR];
    size_t i, j;

    puts(MSG_WELCOME_USER);
    scanf("%s", str);
    puts(MSG_WELCOME_C1_USER);
    scanf("%s", char1);
    puts(MSG_WELCOME_C2_USER);
    scanf("%s", char2);
    puts(str);
    puts(char1);
    puts(char2);

    for (i = 0; str[i] !='\0'; i++)
    {
        for (j = 0; char1[j] !='\0'; j++)
        {
            if (str[i]==char1[j])
                {
                    str[i]=char2[j];
                }
        }
    }

    puts(str);
    
    return 0;

}