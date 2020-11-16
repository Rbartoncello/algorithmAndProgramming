#include <stdio.h>
#include <string.h>

/* #define MSG_USE "Ingrese el numero de la posicion: " */
#define MSG_USE_1 "El determinate de la matriz 2x2 es: "
#define MSG_USE_2 "El determinate de la matriz 3x3 es: "

#define ROW2 2
#define ROW3 3
#define COL2 2
#define COL3 3

int main(void){
    double matrix2 [2][2] =
	{
		{9, 2},
		{3, 4}
	};
    double matrix3[ROW3][COL3]={
        {1, 2, 3},
        {0, 6, 7},
        {0, 0, 2},
        };
    double det_2=0, det_3=0;
    int a, b, c, d, e, f, g, h, i;

    a=matrix2[0][0], b=matrix2[0][1], 
    c=matrix2[1][0], d=matrix2[1][1];

    
    det_2 = (a * d) - (b *c);


    a=matrix3[0][0], b=matrix3[0][1], c=matrix3[0][2],
    d=matrix3[1][0], e=matrix3[1][1], f=matrix3[1][2],
    g=matrix3[2][0], h=matrix3[2][1], i=matrix3[2][2];
    
    det_3 = a * ( (e*i) - (f*h)) - b * ( (f*g) - (d*i)) + c * ( (d*h) - (e*g));

    fprintf(stdout, "%s\t%f\n%s\t%f\n",MSG_USE_1, det_2, MSG_USE_2, det_3);

    return 0;
}