#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ERROR_MSJ_NULL_ARRAY "ERROR array nulo"

#define N 10

typedef enum {
    OK,
    ERROR_NULL_POINTER
} status_t;

status_t load_num(size_t [], size_t);
status_t print_num(size_t [], size_t);

int main(void){

    size_t nums[N];

    if(load_num(nums, N) != OK) {
      fprintf(stderr, "%s\n", ERROR_MSJ_NULL_ARRAY);
      return 1;
    }

    if(print_num(nums, N) != OK) {
      fprintf(stderr, "%s\n", ERROR_MSJ_NULL_ARRAY);
      return 1;
    }

    return 0;
}

status_t load_num(size_t numbers[], size_t n){
    int i;
    if(numbers == NULL)
        return ERROR_NULL_POINTER;
    srand(time(NULL));
    for (i = 0; i <= (n -1); i++)
    {
        numbers[i] = rand() % 2;
    }
    return OK;
}

status_t print_num(size_t numbers[], size_t n){
    int i;
    if(numbers == NULL)
        return ERROR_NULL_POINTER;
    for (i = 0; i <= (n -1); i++)
    {
        printf("%lu ", numbers[i]);
    }
    putchar('\n');

    return OK;
}