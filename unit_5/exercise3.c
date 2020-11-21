#include <stdio.h>

#define ERROR_MSJ_NULL_POINTER "Puntero nulo"

#define USER_MSJ_FINAL "SON"

#define HOUR " Horas "
#define MINUTE " Minutos "
#define SECOND " Segundos "


typedef unsigned int uint;

typedef enum {
    OK,
    ERROR_NULL_POINTER
} status_t;

status_t convert_seg(uint, uint*, uint*, uint*);

int main (void){
    uint seg = 4000;
    uint h, m, s;
    status_t status;

    status= convert_seg ( seg, &h, &m, &s);
    if ( status != OK){
        fprintf(stderr, "%s", ERROR_MSJ_NULL_POINTER);
        return 1;
    }

    printf("%u:\n\t%d%s%d%s%d%s\n", seg, h, HOUR, m, MINUTE, s, SECOND);

    return 0;

}

status_t convert_seg(
    uint seconds,
    uint *h,
    uint *m,
    uint *s
){
    if (h == NULL || m == NULL || s == NULL){
        return ERROR_NULL_POINTER;
    }
    
    *h = seconds / 3600;
    *m = (seconds % 3600) / 60;
    *s = seconds % 60;

    return OK;
}