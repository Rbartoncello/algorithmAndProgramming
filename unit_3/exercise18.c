#include <stdio.h>
#include <string.h>

#define MAX_STR 100

#define MGS_WELCOME_USER "Ingrese una palabra"
#define IS_PALINDROME "Esta palabra es un palindromo"
#define IS_NOT_PALINDROME "Esta palabra NO es un palindromo"

int main(void){
    char str[MAX_STR];
    int i, len;

    puts(MGS_WELCOME_USER);
    scanf("%s", str);

    len=strlen(str);
    len= len - 1;

    for (i = 0; i <= len/2; i++ , len--)
        
            if (str[i] == str[len]){
                if(i==len/2){
                    puts(IS_PALINDROME);
                }
            }else {
                if(i==len/2){
                        puts(IS_NOT_PALINDROME);
                    }
                }

    return 0;
}