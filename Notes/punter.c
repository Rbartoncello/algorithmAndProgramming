#include <stdio.h>

int main(void){

    int a = 123;
    int *p;

    p = &a;

    printf("%p\n", (void*) p); /* direccion de memoraia de a */
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%p\n", (void*) &p); /* direccion de memoraia de p */

    return 0;
}