#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MSG_USER_WELCOME "Ingrece una texto:"

#define MAX_STR 100

int main(void){
    char string1[MAX_STR], string2[MAX_STR], string3[MAX_STR];

    /* printf("%s ", MSG_USER_WELCOME);
    scanf("%s", string1);
    printf("string 1: %s\t\n", string1); */ 
    printf("%s ", MSG_USER_WELCOME);
    gets(string2);
    printf("string 2: %s\t\n", string2);
    printf("%s ", MSG_USER_WELCOME);
    fgetc(string3);
    printf("string  3; %s\n", string3);


    return 0;
}