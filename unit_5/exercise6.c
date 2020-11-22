#include <stdio.h>
#include <stdlib.h>

void a(void);
void b(void);

int main(void){
    int x = 5;
    printf("La X inicial fue: %i\n", x);

    a();
    b();
    a();
    b();
    a();
    b();
    a();
    b();

    return 0;
}

void a(void){
    int x = 10;

    printf("El valor de x la primera vez en funcion a es: %d\n", x);

    x++;

    printf("El valor de x cuando se incrementa en funcion a es: %d\n", x);
}

void b(void){
    static int x = 10;

    printf("El valor de x la primera vez en funcion b con STATIC es: %d\n", x);

    x++;

    printf("El valor de x cuando se incrementa en funcion b con STATIC es: %d\n", x);
}