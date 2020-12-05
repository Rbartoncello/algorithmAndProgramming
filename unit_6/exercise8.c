#include <bits/types/locale_t.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MIN_ARGS 3
#define CMD_ARG_POS_FIRST_VALUE_TOKEN 1
#define CMD_ARG_FIRST_VALUE_TOKEN_m "/m"
#define CMD_ARG_FIRST_VALUE_TOKEN_M "/M"

#define MSJ_ERR_NULL_POINTER "ERROR: Puntero nulo"
#define MSJ_ERR_NO_VALIDATE "ERROR: Ingreso no valido"

#define MSJ_USR_UPPER_FINAL "En Mayusculas: "
#define MSJ_USR_LOWER_FINAL "En minusculas: "

typedef enum {
    OK,
    ERROR_NULL_POINTER,
    ERROR_INVOCATION
} status_t;

status_t validate_arg_position(int, char *[]);
status_t upper_or_lower_case(char *[]);
status_t upper_case(char *[]);
status_t lower_case(char *[]);

int main(int argc, char *argv[]){
    status_t st;
    size_t i;

    fprintf(stdout, "argc[%i]: \n", argc);
    for (i = 0; i < argc; i++){
        fprintf(stdout, "argv[%lu]: %s\n", i, argv[i]);
    }

    st = validate_arg_position(argc, argv);
    switch (st)
    {
    case ERROR_NULL_POINTER:
        fprintf(stderr, "%s\n", MSJ_ERR_NULL_POINTER);
        break;
    case ERROR_INVOCATION:
        fprintf(stderr, "%s\n", MSJ_ERR_NO_VALIDATE);
        break;
    case OK:
        break;
    }

    st = upper_or_lower_case(argv);
    if (st != OK){
        fprintf(stderr, "%s\n", MSJ_ERR_NO_VALIDATE);
        return ERROR_INVOCATION;
    }

    for (i = 2; i < argc; i++){
        fprintf(stdout, "argv[%lu]: %s\n", i, argv[i]);
    }
    
    return OK;
}

status_t validate_arg_position(int argc, char *argv[]){

    if(argv == NULL){
        return ERROR_NULL_POINTER;
    }
    if(argc < MIN_ARGS){
        return ERROR_INVOCATION;
    }

    if (strcmp(argv[CMD_ARG_POS_FIRST_VALUE_TOKEN], CMD_ARG_FIRST_VALUE_TOKEN_M) == 0){
        return OK;
    }
    if (strcmp(argv[CMD_ARG_POS_FIRST_VALUE_TOKEN], CMD_ARG_FIRST_VALUE_TOKEN_m) == 0){
        return OK;
    }

    return ERROR_INVOCATION;
}

status_t upper_or_lower_case(char *argv[]){

    if (strcmp(argv[CMD_ARG_POS_FIRST_VALUE_TOKEN], CMD_ARG_FIRST_VALUE_TOKEN_M) == 0){
        if(upper_case(argv) != OK){
            return ERROR_NULL_POINTER;
        }
        return OK;
    } else if ((strcmp(argv[CMD_ARG_POS_FIRST_VALUE_TOKEN], CMD_ARG_FIRST_VALUE_TOKEN_m) == 0)) {
        if(lower_case(argv) != OK){
            return ERROR_NULL_POINTER;
        }
        return OK;
    }
    return ERROR_INVOCATION;
}

status_t upper_case(char *argv[]){
    size_t i, j;

    if (argv == NULL){
        return ERROR_NULL_POINTER;
    }

    for (i = 2; argv[i] != NULL; i++){
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            argv[i][j] = toupper(argv[i][j]);
        }
    }

    return OK;
}
status_t lower_case(char *argv[]){
    size_t i, j;

    if (argv == NULL){
        return ERROR_NULL_POINTER;
    }

    for (i = 2; argv[i] != NULL; i++){
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            argv[i][j] = tolower(argv[i][j]);
        }
    }

    return OK;
}