#include <stdio.h>
#include <string.h>

#define MSG_USE_1 "Ingrese el numero de filas: "
#define MSG_USE_2 "Ingrese el numero de columnas: "

#define MSG_USE_3 "Ingrese el numero de la posicion: "
#define MSG_USE_4 "La traza de la matriz es: "

#define MSG_ERROR "ERROR!!! ingreso de dato NO numerico"

int main(void){
    int ROW, COL;
    double matrix[ROW][COL];
    size_t i, j, traz=0;
    int c, st;

    puts(MSG_USE_1);
    if (!(st=scanf("%i", &ROW)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if (st ==EOF)
        return 1;
    while ((c=getchar()) !='\n');
    puts(MSG_USE_2);
    if (!(st=scanf("%i", &COL)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if (st ==EOF)
        return 1;
    while ((c=getchar()) !='\n');

    
    for (i = 0; i <=(ROW-1); i++)
        {
            for (j = 0; j <= (COL-1); j++)
                {
                    fprintf(stdout, "%s(%lu)(%lu)\n ", MSG_USE_1, i+1, j+1);
                    if (!(st=scanf("%lf", &matrix[i][j])))
                        {
                            fprintf(stderr, "%s\n", MSG_ERROR);
                            return 1;
                        }
                    if (st ==EOF)
                        return 1;
                    while ((c=getchar()) !='\n');
                }
            putchar('\n');
        }

    for (i = 0; i <=(ROW-1); i++)
        {
            for (j = 0; j <= (COL-1); j++)
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