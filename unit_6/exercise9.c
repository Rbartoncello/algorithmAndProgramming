#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ARGS 7
#define FIRST_NAME_POSITION "-n"
#define SECOND_NAME_POSITION "-i"
#define THRIRD_NAME_POSITION "-s"
#define FIRST_NUMBER_POSITION 1
#define SECOND_NUMBER_POSITION 3
#define THRIRD_NUMBER_POSITION 5

#define MAX_ARR 100

#define MSJ_ERROR_NULL_POINTER "ERROR: Puntero Nulo"
#define MSJ_ERROR_INVOCATION "ERROR: Invocacion incorecta"

typedef enum {
    OK,
    ERROR_NULL_POINTER,
    ERROR_INVOCATION
} status_t;

status_t validate_args_position(int, char*[], int *, int *, int *);

int main(int argc, char*argv[]){
    int numers_total = 0, number_down = 0, number_over = 0;
    int number[MAX_ARR], i;
    status_t st;

    srand(time(NULL));

    st = validate_args_position(argc, argv, &numers_total, &number_down, &number_over);
    switch (st)
    {
    case ERROR_NULL_POINTER:
        fprintf(stderr, "%s\n", MSJ_ERROR_NULL_POINTER);
        break;
    case ERROR_INVOCATION:
        fprintf(stderr, "%s\n", MSJ_ERROR_INVOCATION);
        break;
    case OK:
        break;
    }

    for (i = 0; i <= (numers_total - 1); i++)
    {
        number[i] = (int) (rand() % number_over + number_down);
        if (number[i] > number_over){
            i --;
        }
    }

    for (i = 0; i <= (numers_total - 1); i++)
    {
        fprintf(stdout, "%i ", number[i]);
    }
    putchar('\n');
    
    return OK;
}

status_t validate_args_position(int argc, char *argv[], int * t, int * d, int * o){
    char *tmp;

    if (argv == NULL || t == NULL || d == NULL || o == NULL){
        return ERROR_NULL_POINTER;
    }

    if (argc != MAX_ARGS){
        return ERROR_INVOCATION;
    }

    if (strcmp(argv[FIRST_NUMBER_POSITION], FIRST_NAME_POSITION)){
        return ERROR_INVOCATION;
    }
    *t = strtol(argv[FIRST_NUMBER_POSITION + 1], &tmp, 10 );
    if(*tmp){
        return ERROR_INVOCATION;
    }
    if (strcmp(argv[SECOND_NUMBER_POSITION], SECOND_NAME_POSITION)){
        return ERROR_INVOCATION;
    }
    *d = strtol(argv[SECOND_NUMBER_POSITION + 1], &tmp, 10 );
    if(*tmp){
        return ERROR_INVOCATION;
    }
    if (strcmp(argv[THRIRD_NUMBER_POSITION], THRIRD_NAME_POSITION)){
        return ERROR_INVOCATION;
    }
    *o = strtol(argv[THRIRD_NUMBER_POSITION + 1], &tmp, 10 );
    if(*tmp){
        return ERROR_INVOCATION;
    }

    return 0;
}