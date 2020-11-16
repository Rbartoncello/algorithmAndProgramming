#include <stdio.h>
#include <string.h>

/* #define MSG_USE "Ingrese el numero de la posicion: " */
#define MSG_USE_2 "La traza de la matriz es: "
#define N 4

int main(void){
    double matrix[N][N]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7},
        };
    size_t i, j, traz=0;

    for (i = 0; i <=(N-1); i++)
        {
            for (j = 0; j <= (N-1); j++)
            {
                fprintf(stdout, "%.0f ", matrix[i][j]);
                if (j == i)
                    {
                        traz+=matrix[i][j];
                    }
            }
            putchar('\n');
        }
    
    fprintf(stdout, "%s%lu\n", MSG_USE_2, traz);
    
    return 0;
}