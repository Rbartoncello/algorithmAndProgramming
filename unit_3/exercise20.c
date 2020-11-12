#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 20
#define MSG_USER_1 "Introducir el primer numero"
#define MSG_USER_2 "Introducir el segundo numero numero"

int main(void){
    char num1[MAX_STR], num2[MAX_STR];

    int num_1_int, num_2_int;
    float num_1_fl, num_2_fl;

    puts(MSG_USER_1);
    fgets(num1, sizeof(num1)+2,stdin);
    puts(MSG_USER_2);
    fgets(num2, sizeof(num2)+2,stdin);

    num_1_int = atoi(num1);
    num_2_int = atoi(num2);

    num_1_fl = atoi(num1);
    num_2_fl = atoi(num2);

    printf("%s%s%s%i%s%.2f\n", "El primer numero ingresado fue ", num1, " el numero con atoi es ", num_1_int,  " el numero con atof es ",  num_1_fl);
    printf("%s%s%s%i%s%.2f\n", "El primer numero ingresado fue ", num2, " el numero con atoi es ", num_2_int,  " el numero con atof es ",  num_2_fl);

    return 0;
}