#include <stdio.h>
#include <string.h>

#define MAX_STR 50

#define ERROR_MSJ_NULL_POINTER "ERROR!! Puntero nulo"

#define USER_MSJ_ENTER_STRING "Ingre un arreglo de caracteres"

typedef enum{
    OK,
    ERROR_NULL_POINTER
} status_t;

status_t string_reverse(char *);

int main(void){
    char ptr[MAX_STR];

    puts(USER_MSJ_ENTER_STRING);
    fgets(ptr, sizeof(ptr) , stdin);

    if(string_reverse(ptr) != OK){
        fprintf(stderr,"%s\n", ERROR_MSJ_NULL_POINTER);
        return ERROR_NULL_POINTER;
    }

    return OK;
}

status_t string_reverse(char *p){

    int len = 0, i;
    char temp;

    if (p == NULL || p[0] == ' '){
        return ERROR_NULL_POINTER;
    }

    len = strlen (p);

    for (i = 0; i < len/2; i++)
    {
        temp = p[i];
        p[i] = p[len - i - 1];
        p[len - i - 1] = temp;
    }

    puts(p);

    return OK;
}