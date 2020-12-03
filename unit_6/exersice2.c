#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARGS 3
#define MAX_WORDS 3
#define CMD_ARG_POS_FIRST_VALUE_TOKEN 1
#define CMD_ARG_POS_SECOND_VALUE_TOKEN 3

#define MSJ_IGUAL "El tamaño de los argumento es el mismo"
#define MSJ_MAXIMO_1 "El tamaño del primer argumento es mayor"
#define MSJ_LESS_1 "El tamaño del segundo argumento es mayor"

typedef enum {OK, ERROR_NULL_POINTER, ERROR_INVOCATION} status_t;

status_t validate_arg_fixed_position(int argc, char *argv[]);
status_t length_compare(int argc, char *argv[]);

int main (int argc, char *argv[]){

    status_t st;
    size_t i;

    st = validate_arg_fixed_position(argc, argv);

    if(st != OK) {
        fprintf(stderr, "%s %s \n", "ERROR:", "Invocacion incorrecta");
        return st;
    }

    fprintf(stdout, "%s%d\n", "argc: " , argc);
    for (i = 0; i < argc; i++)
    {   
        fprintf(stdout, "argv[%ld] = %s \n",  i, argv[i]);
    }

    st = length_compare(argc, argv);

    if(st != OK) {
        fprintf(stderr, "%s %s \n", "ERROR:", "Invocacion incorrecta");
        return st;
    }

    
    return EXIT_SUCCESS;
}

status_t validate_arg_fixed_position(int argc, char *argv[]) {
    
	
	if(argv == NULL){
		return ERROR_NULL_POINTER;
	}

		/* Siempre validar argc */
    if(argc != MAX_ARGS) {
        return ERROR_INVOCATION;
    }
    return OK;
}

status_t length_compare(int argc, char *argv[]) {

    if(argv == NULL){
		return ERROR_NULL_POINTER;
	}

    int i;

    for (i = 1; i < argc; i ++){
        if (strlen(argv[i]) == strlen(argv[i + 1])){
            fprintf(stdout, "%s\n", MSJ_IGUAL);
            break;
           
        } else if (strlen(argv[i]) > strlen(argv[i + 1])){
            fprintf(stdout, "%s\n", MSJ_MAXIMO_1);
            break;
            
        } else {
            fprintf(stdout, "%s\n", MSJ_LESS_1);
            break;
        }
    }

    return OK;
}
