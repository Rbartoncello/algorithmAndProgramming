#include <stdio.h>

int main(void){
    int dos_vector[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3}
    };
    size_t i, j;
    int *dos_ptr;
    int (*ptr2vector)[4];

    ptr2vector = dos_vector;

    for (i = 0; i < 3; ptr2vector ++, i++){
        dos_ptr = *ptr2vector;
        for (j = 0; j < 4; dos_ptr++, j++){
            printf("%d", *dos_ptr);
        }
        putchar('\n');
    }
    return 0;
}