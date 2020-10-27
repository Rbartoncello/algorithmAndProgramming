#include<stdio.h>

int main(void){

    float average;
    int counter, total, grade;

    total= 0;
    counter=0;

    printf("Ingrese nota,-1 para terminar: ");
    scanf("%d", &grade);

    while (grade != -1)
    {
        total+=grade;
        counter+=1;
        printf("Ingrese nota,-1 para terminar: ");
        scanf("%d", &grade);
        total+=grade;
        counter+=1;
    }
    

    if(counter != 0) {
    average= (float) total/counter;
    printf("El promedio de notas es:%.2f\n", average);
    }
    else {
        printf("No fue ingresado ninguna nota!\n");
    }
    return 0;

}