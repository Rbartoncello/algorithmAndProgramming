#include <stdio.h>

#define ERROR_MSJ_NULL_POINTER "ERROR!! punter vasio"

#define SUCCESS_MJS "El string no esta vasio"

#define MAX_STR 10

typedef enum {
    OK,
    ERROR_NULL_POINTER
} bool_t;

bool_t is_empty_string(const char *);

int main(void){
    char ptr[MAX_STR];

    if(is_empty_string(ptr) != OK){
        fprintf(stderr, "%s\n", ERROR_MSJ_NULL_POINTER);
        return ERROR_NULL_POINTER;
    }

    return OK;
}

bool_t is_empty_string(const char *p){

    if (p == NULL || p[0] == ' '){
        return ERROR_NULL_POINTER;
    }

    puts(SUCCESS_MJS);

    return OK;
}