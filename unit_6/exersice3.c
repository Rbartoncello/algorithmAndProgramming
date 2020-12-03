#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARGS 2
#define CMD_ARG_POS_FIRST_VALUE_TOKEN 1
#define CMD_ARG_FIRST_VALUE_TOKEN "-t"
/*
    ./cla_validations -a 1 -b 2
		./cla_validations -b 1 -a 1
    3
*/

typedef enum {OK, ERROR_NULL_POINTER, ERROR_INVOCATION, ERROR_FACTORIAL_NULL} status_t;

status_t validate_arg(int argc, char *argv[], int *a);
long factorial_calcule(long);

int main (int argc, char *argv[]){

    int number;
    status_t st;

    st = validate_arg(argc, argv, &number);

    if(st != OK) {
        fprintf(stderr, "%s %s \n", "ERROR:", "Invocacion incorrecta");
        return st;
    }
    printf("%2d! = %1ld\n",number, factorial_calcule(number));

    
    return EXIT_SUCCESS;
}

status_t validate_arg(int argc, char *argv[], int *a) {
    
    char *tmp;
	
		if(a == NULL || argv == NULL){
			return ERROR_NULL_POINTER;
		}

		/* Siempre validar argc */
    if(argc != MAX_ARGS) {
        return ERROR_INVOCATION;
    }
		/* Traducción de los valores*/
    *a = strtol(argv[CMD_ARG_POS_FIRST_VALUE_TOKEN], &tmp, 10);
    if(*tmp) {
        return ERROR_INVOCATION;
    }

    return OK;
}

long factorial_calcule(long num){

    if (num <= 1){
        return 1;
    } else {
        return (num * factorial_calcule(num - 1));
    }
    
}