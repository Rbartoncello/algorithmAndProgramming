#include<stdio.h>
#include<math.h>

int main(void){
    
    int a, b, c;
    float y1, y2;
    int p, st;

    printf("Ingrese tres numeros que desee para calcular la ecuacion cuadratica\n");
    if(!(st=scanf("%d%d%d", &a,&b,&c)))
        {
            fprintf(stderr, "%s\n", "ERROR DE INGRESO");
            return 1;
        }
    if(st == EOF)
        return 1;
    while((p=getchar()) !='\n');

    printf("%4s%10s%10s\n", "a", "b", "c");
    printf("%4d%10d%10d\n", a, b, c);
    printf("%4d * x^2 + %d * x + %d\n", a, b, c);

    if (pow(b, 2.0) >= 4*a*c)
        {
            y1 = (double) (-b + sqrt(pow(b, 2.0)- 4*a*c))/(2*a);
            y2 = (double) (-b - sqrt(pow(b, 2.0)- 4*a*c))/(2*a) ;
            printf("Las posibles soliciones son %f y %f\n", y1, y2);
        } else
            {
                printf("No se puede calcular ya que la solucion no es un numero real\n");
            }
        

    return 0;
}