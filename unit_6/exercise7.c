#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARGS 5
#define CMD_ARG_POS_FIRST_VALUE_TOKEN 1
#define CMD_ARG_FIRST_VALUE_TOKEN "-p"
#define CMD_ARG_POS_SECOND_VALUE_TOKEN 3
#define CMD_ARG_SECOND_VALUE_TOKEN "-l"

#define MSJ_ERROR_NULL_POINTER "ERROR: Puntero nulo"
#define MSJ_ERROR_INVOCATION "ERROR: Invocacion no correcta"

#define MSJ_ARGC "Argc: "

typedef enum {
    OK,
    ERROR_NULL_POINTER,
    ERROR_INVOCATION
} status_t;

status_t validate_arg_fixed_position(int , char *[], size_t *, size_t *);

int main(int argc, char *argv[]){
    size_t position = 0, lenth = 0, i;

    status_t st;
    
    fprintf(stdout, "%s%d\n", MSJ_ARGC , argc);
    for (i = 0; i < argc; i++)
    {   
        fprintf(stdout, "argv[%ld] = %s \n",  i, argv[i]);
    }

    st = validate_arg_fixed_position(argc, argv, &position, &lenth);
    switch (st)
    {
    case ERROR_NULL_POINTER:
        fprintf(stderr, "%s\n", MSJ_ERROR_NULL_POINTER);
        return ERROR_NULL_POINTER;
        break;
    case ERROR_INVOCATION:
        fprintf(stderr, "%s\n", MSJ_ERROR_INVOCATION);
        return ERROR_INVOCATION;
        break;
    case OK:
        break;
    }

    fprintf(stdout, "%s%lu\n%s%lu\n", "position: ", position, "ancho: ", lenth);

    return OK;
}

status_t validate_arg_fixed_position(int argc, char *argv[], size_t *p, size_t *l){

    char *tmp;

    if (argv == NULL || p == NULL || l == NULL){
        return ERROR_NULL_POINTER;
    }

    if (argc != MAX_ARGS){
        return ERROR_INVOCATION;
    }

    if (strcmp(argv[CMD_ARG_POS_FIRST_VALUE_TOKEN], CMD_ARG_FIRST_VALUE_TOKEN) != 0){
        return ERROR_INVOCATION;
    }

    *p = strtol(argv[CMD_ARG_POS_FIRST_VALUE_TOKEN + 1], &tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION;
    }

    if (strcmp(argv[CMD_ARG_POS_SECOND_VALUE_TOKEN], CMD_ARG_SECOND_VALUE_TOKEN) != 0){
        return ERROR_INVOCATION;
    }

    *l = strtol(argv[CMD_ARG_POS_SECOND_VALUE_TOKEN + 1], &tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION;
    }

    return OK;
}