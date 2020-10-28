#include<stdio.h>

int maximun(int, int, int);

int main(void)
{
    int a, b, c;

    printf("Ingresa tres numeros.\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("El numero mayor es. %d\n", maximun(a ,b ,c));

    return 0;
}

int maximun(int x, int y, int z)
{
    int max = x;

    if (y > max){
        max = y;
    }
    if (z > max){
        max = z;
    }
    return max;
}