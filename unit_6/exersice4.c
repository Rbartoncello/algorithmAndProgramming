#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR_DATE_INCORRECT "ERROR: Invocacion incorrecta"
#define ERROR_MSJ_NULL_POINTER "ERROR: Puntero nulo"

#define MAX_ARGS 27


typedef enum {OK, ERROR_NULL_POINTER, ERROR_INVOCATION} status_t;

status_t validate_arg(int argc, char *argv[]);
char order_alfabetic(int argc, char *argv[]);
int main (int argc, char *argv[]){

    status_t st;
    size_t i;
    fprintf(stdout, "%s%d\n", "argc: " , argc);
    for (i = 0; i < argc; i++)
    {   
        fprintf(stdout, "argv[%ld] = %s \n",  i, argv[i]);
    }

    st = validate_arg(argc, argv);

    switch (st)
    {
    case ERROR_INVOCATION:
        fprintf(stderr, "%s\n", ERROR_DATE_INCORRECT );
        return st;
        break;
    case ERROR_NULL_POINTER:
        fprintf(stderr, "%s\n", ERROR_MSJ_NULL_POINTER );
        return st;
        break;
    case OK:
        break;
    }

    order_alfabetic(argc, argv);

    for (i = 1; i < argc; i++)
    {   
        fprintf(stdout, "%s ", argv[i]);
    }
    putchar('\n');
    
    return EXIT_SUCCESS;
}

status_t validate_arg(int argc, char *argv[]) {
	
    char *tmp;
    size_t i;

	if(argv == NULL){
		return ERROR_NULL_POINTER;
	}

		/* Siempre validar argc */
    if(argc > MAX_ARGS) {
        return ERROR_INVOCATION;
    }
    
    for (i = 1; i <= argc - 1 ; i++){
        if(strtol(argv[i], &tmp, 0)) {
            return ERROR_INVOCATION;
        }
    }
    return OK;
}

char order_alfabetic(int argc, char *argv[]){
    char *tmp;
    int i, j;

    for (i = 1;i <= argc - 1 ; i++){
        for (j = i + 1; j < argc; j++){
        
        fprintf(stdout, "%s %s %d\n ", argv[i], argv[j], strcmp(argv[i], argv[j]));
        
        if (strcmp(argv[i], argv[j]) > 0) {
            tmp = argv[i];
            argv[i] = argv[j];
            argv[j] = tmp;
        }
    }
    }
    return 0;
}