#include <stdio.h>
#include <math.h>

#define USER_MSJ_ENTER_MAX "Ingrese el Nro de la catidad de notas"
#define USER_MSJ_ENTER_NOTAS "Ingrese la nota "

#define USER_MSJ_ENTER_AVERAGE "El promedio artimeticos es: "
#define USER_MSJ_ENTER_DESVIATION "La desviacion standard es: "

#define ERROR_MSJ_ENTER_NO_NUMERIC "ERROR!!! Dato ingresado NO numerico."

float atrimetic_average(double [], int);
float standard_deviation(double [], int, float);

int main(void){
    int max_grades, i;
    double num[50];
    float average, grades, desviation;
    
    int c, st;


    puts(USER_MSJ_ENTER_MAX);
    if(!(st=scanf("%i", &max_grades))){
        fprintf(stderr, "%s\n", ERROR_MSJ_ENTER_NO_NUMERIC);
        return 1;
    }
    if (st == EOF)
        return 1;
    while ((c = getchar()) !='\n');

    for (i = 0; i <= (max_grades -1); i++)
    {
        fprintf(stdout, "%s%i: ", USER_MSJ_ENTER_NOTAS, i +1);
        if(!(st=scanf("%f", &grades))){
        fprintf(stderr, "%s\n", ERROR_MSJ_ENTER_NO_NUMERIC);
        return 1;
        }
        if (st == EOF)
            return 1;
        while ((c = getchar()) !='\n');
        num[i]=grades;
    }
    average = atrimetic_average( num, max_grades);

    desviation = standard_deviation(num, max_grades, average);

    fprintf(stdout, "%s%.2f\n%s%.2f\n", USER_MSJ_ENTER_AVERAGE, average, USER_MSJ_ENTER_DESVIATION, desviation);

    return 0;
}

float atrimetic_average(double n[], int MAX){
    double sum = 0;
    int i = 0;
    
    while (i <= (MAX-1)){
        sum += n[i];
        i++;
    }

    return (float) sum/MAX;
}

float standard_deviation(double n[], int MAX, float a){
    int i;
    size_t sum = 0;

    for (i = 0; i <= (MAX -1); i++)
    {
        sum += (n[i] - a) * (n[i] - a);
    }
    
    return (float) sqrt( (float) sum/MAX);
}