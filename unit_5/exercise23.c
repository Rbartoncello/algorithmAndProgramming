#include <stdio.h>
#include <string.h>

#define ERR_MSJ_NULL_POINTER "ERROR!! Puntero nulo"
#define ERR_MSJ_DATE_NOT_VALIDATE "ERROR!! Data ingresado NO numerico"

#define USR_MSJ_ENTER_NUM_ROWS "Ingrese el numero de filas de la matriz"
#define USR_MSJ_ENTER_NUM_COLS "Ingrese el numero de columas de la matriz"

#define USR_MSJ_ENTER_NUMS "Ingrese el numero de la posición"

#define USR_MSJ_MTX_TRUE "La matriz es SIMETRICA"
#define USR_MSJ_MTX_FALSE "La matriz NO es SIMETRICA"

#define USR_MSJ_MTX_TRAZ "La traza de la matriz es: "

#define USR_MSJ_MTX_DET "La determinate de la matriz es: "

#define MAX_ROWS 10
#define MAX_COLS 10

typedef enum {
    OK,
    ERR_NULL_POINTER,
    SYMMETRIC_FALSE
} status_t;

status_t symmetric(int, int, double (*)[MAX_COLS]);
status_t print_matrix(int, int, double (*)[MAX_COLS]);
status_t traz(int, int, double (*)[MAX_COLS]);
status_t det(int, double (*)[MAX_COLS]);

int main(void){
    double matrix[MAX_ROWS][MAX_COLS];
    int row = 0, col = 0, sr, c, i, j;
    status_t st;

    puts(USR_MSJ_ENTER_NUM_ROWS);
    if (!(sr=scanf("%i", &row))){
        fprintf(stderr, "%s\n", ERR_MSJ_DATE_NOT_VALIDATE);
        return ERR_NULL_POINTER;
    }
    if (sr == EOF)
        return ERR_NULL_POINTER;
    while ((c = getchar()) != '\n');

    puts(USR_MSJ_ENTER_NUM_COLS);
    if (!(sr=scanf("%i", &col))){
        fprintf(stderr, "%s\n", ERR_MSJ_DATE_NOT_VALIDATE);
        return ERR_NULL_POINTER;
    }
    if (sr == EOF)
        return ERR_NULL_POINTER;
    while ((c = getchar()) != '\n');

    for (i = 0; i <= (row - 1); i++)
    {
        for (j = 0; j <= (col - 1); j++)
        {
            fprintf(stdout, "%s [%i][%i]: ", USR_MSJ_ENTER_NUMS, i +1, j +1);
            if (!(sr=scanf("%lf", &matrix[i][j]))){
            fprintf(stderr, "%s\n", ERR_MSJ_DATE_NOT_VALIDATE);
            return ERR_NULL_POINTER;
            }
            if (sr == EOF)
                return ERR_NULL_POINTER;
            while ((c = getchar()) != '\n');
        }
    }

    st = print_matrix(row, col, matrix);
    if (st != OK){
        fprintf(stderr, "%s\n", ERR_MSJ_NULL_POINTER);
        return ERR_NULL_POINTER;
    }
    
    st = symmetric(row, col, matrix);
    switch (st) {
        case ERR_NULL_POINTER:
            fprintf(stderr, "%s\n", ERR_MSJ_NULL_POINTER);
            return ERR_NULL_POINTER;
            break;
        case SYMMETRIC_FALSE:
            puts(USR_MSJ_MTX_FALSE);
            break;
        case OK:
            puts(USR_MSJ_MTX_TRUE);
            break;
    }

    if (row == col){
        st = traz(row, col, matrix);
        if (st != OK){
            fprintf(stderr, "%s\n", ERR_MSJ_NULL_POINTER);
            return ERR_NULL_POINTER;
        }
        if (row <= 3){
            st = det(row, matrix);
            if (st != OK){
                fprintf(stderr, "%s\n", ERR_MSJ_NULL_POINTER);
                return ERR_NULL_POINTER;
            }
        }
    }

    return OK;
}

status_t print_matrix(int r, int c, double (*m)[MAX_COLS]){
    size_t i, j;

    for (i = 0; i <= (r - 1); i++)
        {
            for (j = 0; j <= (c - 1); j++)
            {
                fprintf(stdout, "%.f ", m[i][j]);
            }
            putchar('\n');
        }

    return OK;
}

status_t symmetric(int r, int c, double (*m)[MAX_COLS]){
    size_t i, j;

    if (m == NULL){
        return ERR_NULL_POINTER;
    }

    for (i = 0; i <= (r - 1); i++)
    {
        for (j = 0; j <= (c - 1) - 1; j++)
        {
            if (m[i][j] != m[j][i]){
                return SYMMETRIC_FALSE;
            }
        }
    }
    
    return OK;
}

status_t traz(int r, int c, double (*m)[MAX_COLS]){
    size_t i;
    double traz;

    if (m == NULL){
        return ERR_NULL_POINTER;
    }
    for (i = 0, traz = 0; i <= (r - 1); i++)
        traz += m[i][i];

    fprintf(stdout, "%s%.f\n", USR_MSJ_MTX_TRAZ, traz);

    return OK;
}

status_t det(int r, double (*m)[MAX_COLS]){
    double det=0;
    int a, b, c, d, e, f, g, h, i;

    if (m == NULL){
        return ERR_NULL_POINTER;
    }

    if (r == 2){
        a=m[0][0], b=m[0][1], 
        d=m[1][0], e=m[1][1];

        det = (a * e) - (b *d);
    } else if (r == 3){
        a=m[0][0], b=m[0][1], c=m[0][2],
        d=m[1][0], e=m[1][1], f=m[1][2],
        g=m[2][0], h=m[2][1], i=m[2][2];
    
        det = a * ( (e*i) - (f*h)) - b * ( (f*g) - (d*i)) + c * ( (d*h) - (e*g));
    }

    fprintf(stdout, "%s\t%.f\n", USR_MSJ_MTX_DET, det);

    return OK;
}