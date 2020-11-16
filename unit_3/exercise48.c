#include <stdio.h>
#include <string.h>

/* #define MSG_USE "Ingrese el numero de la posicion: " */
#define MSG_USE_2 "La traza de la matriz es: "
#define N 2
#define M 2
#define P 3

int main(void){
    double matrix1[N][M]={
        {1, 1},
        {1, 1}
        };
    double matrix2[M][P]={
        {1, 1, 1},
        {1, 1, 1}
        };
    double matrix3[N][P];
    size_t i, j, k;

    for (i = 0; i <=(N-1); i++)
        {
            for (j = 0; j <= (M-1); j++)
            {
                fprintf(stdout, "%.0f ", matrix1[i][j]);
            }
            putchar('\n');
        }
    putchar('\n');
    for (i = 0; i <=(M-1); i++)
        {
            for (j = 0; j <= (P-1); j++)
            {
                fprintf(stdout, "%.0f ", matrix2[i][j]);
            }
            putchar('\n');
        }
    putchar('\n');        
    for (i = 0; i <=(N-1); i++)
        {
            for (j = 0; j <= (P-1); j++)
            {
                matrix3[i][j] = 0;
                for (k = 0; k <= (M-1); k++)
                {
                    matrix3[i][j] +=  matrix1[i][k] * matrix2[k][j];
                }
                fprintf(stdout, "%.0f ", matrix3[i][j]);
            }
            putchar('\n');
        }
    return 0;
}