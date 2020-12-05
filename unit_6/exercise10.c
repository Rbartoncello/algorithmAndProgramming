#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ALFA_VALUE      "-alfa"
#define AMP_VALUE       "-amp"
#define FREC_VALUE      "-frec"
#define START_VALUE     "-start"
#define FINISH_VALUE    "-finish"
#define POINTS_VALUE    "-points"

#define MAX_ARGS 13

#define ALFA_VALUE_POSITION     1
#define AMP_VALUE_POSITION      3
#define FREC_VALUE_POSITION     5
#define START_VALUE_POSITION    7
#define FINISH_VALUE_POSITION   9
#define POINTS_VALUE_POSITION   11

#define MSJ_ERR_NULL_POINTER "ERROR: Puntero nulo"
#define MSJ_ERR_INVOCATION "ERROR: Invacion no valida"
#define MSJ_ERR_INVOCATION_MAX_ARGS "ERROR: Invacion no tine la cantidad pedida de argumentos"

#define MSJ_ERR_INVOCATION_ALFA "ERROR: Invacion de -alfa no valida"
#define MSJ_ERR_INVOCATION_AMP "ERROR: Invacion de -amp no valida"
#define MSJ_ERR_INVOCATION_FREC "ERROR: Invacion de -frec no valida"
#define MSJ_ERR_INVOCATION_START "ERROR: Invacion de -start no valida"
#define MSJ_ERR_INVOCATION_FINISH "ERROR: Invacion de -finish no valida"
#define MSJ_ERR_INVOCATION_POINTS "ERROR: Invacion de -points no valida"

#define MAX_NUMBER_RESULT_INIT 100
#define PI 3.14

typedef enum {
    OK,
    ERROR_NULL_POINTER,
    ERROR_INVOCATION,
    ERROR_INVOCATION_MAX_ARGS,
    ERROR_INVOCATION_ALFA,
    ERROR_INVOCATION_AMP,
    ERROR_INVOCATION_FREC,
    ERROR_INVOCATION_START,
    ERROR_INVOCATION_FINISH,
    ERROR_INVOCATION_POINTS
} status_t;

status_t validate_args(int, char *[], int *, int *, int *, int *, int *, int *);
status_t calculate_onda(double, double, double, int, int, double);
status_t show_error(status_t);

int main(int argc, char *argv[]){
    int 
        alfa = 0,
        amplitud = 0,
        frecuence = 0,
        start = 0,
        finish = 0,
        points = 0;

    status_t st;
    size_t i;

    for (i = 0; i < argc; i ++)
        printf("argv[%lu]: %s\n", i, argv[i]);


    st = validate_args(argc, argv, &alfa, &amplitud, &frecuence, &start, &finish, &points);
        show_error(st);

    st = calculate_onda(alfa, amplitud, frecuence, start, finish, points);
        show_error(st);

    
    return OK;
}

status_t validate_args(int argc, char *argv[], int *alfa, int *amp, int *f, int *sta, int *fin, int *p){
    char *tmp;

    if (argv == NULL || alfa == NULL || amp == NULL || f == NULL || sta == NULL || fin == NULL || p == NULL){
        return ERROR_NULL_POINTER;
    }
    if (argc != MAX_ARGS){
        return ERROR_INVOCATION_MAX_ARGS;
    }

    if (strcmp(argv[ALFA_VALUE_POSITION], ALFA_VALUE)){
        return ERROR_INVOCATION_ALFA;
    }
    *alfa = strtol(argv[ALFA_VALUE_POSITION + 1], &tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION_ALFA;
    }
    *amp = strtol(argv[AMP_VALUE_POSITION + 1], &tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION_AMP;
    }
    *f = strtol (argv[FREC_VALUE_POSITION + 1],&tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION_FREC;
    }
    *sta = strtol(argv[START_VALUE_POSITION + 1], &tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION_START;
    }
    *fin = strtol(argv[FINISH_VALUE_POSITION + 1], &tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION_FINISH;
    }
    *p = strtol(argv[POINTS_VALUE_POSITION + 1], &tmp, 10);
    if (*tmp){
        return ERROR_INVOCATION_POINTS;
    }

    return OK; 
}

status_t calculate_onda(double alfa, double amp, double f, int sta, int fin, double p){
    size_t i;

    int pointers = 0;

    if (p <= 0){
        return ERROR_INVOCATION;
    }

    pointers = (fin - sta)/p;

    printf("%i\n", pointers);
    printf("%f\n", exp(1));
    printf("%s\n", "pointers");

    for  (i = sta; i <= fin; i+= pointers ){
        fprintf(stdout, "%.2f\n", exp(-alfa * i) * amp * cos (2 * PI/180 * f * i));
    }

    return OK;
}

status_t show_error(status_t status){

    switch (status)
    {
    case ERROR_NULL_POINTER:
        fprintf(stderr, "%s\n", MSJ_ERR_NULL_POINTER);
        return ERROR_NULL_POINTER;
        break;
    case ERROR_INVOCATION:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION);
        return ERROR_INVOCATION;
        break;
    case ERROR_INVOCATION_MAX_ARGS:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION_MAX_ARGS);
        return ERROR_INVOCATION;
        break;
    case ERROR_INVOCATION_ALFA:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION_ALFA);
        return ERROR_INVOCATION_ALFA;
        break;
    case ERROR_INVOCATION_AMP:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION_AMP);
        return ERROR_INVOCATION_AMP;
        break;
    case ERROR_INVOCATION_FREC:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION_FREC);
        return ERROR_INVOCATION_FREC;
        break;
    case ERROR_INVOCATION_START:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION_START);
        return ERROR_INVOCATION_START;
        break;
    case ERROR_INVOCATION_FINISH:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION_FINISH);
        return ERROR_INVOCATION_FINISH;
        break;
    case ERROR_INVOCATION_POINTS:
        fprintf(stderr, "%s\n", MSJ_ERR_INVOCATION_POINTS);
        return ERROR_INVOCATION_POINTS;
        break;
    case OK:
        break;
    }
    return OK;
}
