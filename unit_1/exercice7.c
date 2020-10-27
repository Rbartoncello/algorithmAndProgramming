#include <stdio.h>

int main(void) {

    int grade, total;
    grade=total=0;

    do {
        total+=grade;
        printf("Introduzca calificacion \n");
        scanf("%d", &grade);
    }
    while ((grade>=0) && (grade<=100));
    
    printf("Valor de caflificacion de %i es INVALIDO \n", grade);
    printf("El total de las calificacion es: %i \n", total);
    

    return 0;
}
