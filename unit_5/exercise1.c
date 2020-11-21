#include <stdio.h>

#define USER_MSJ_ENTER "Ingrese un numero entero y positivo"
#define USER_MSJ_FACTORIAL "El factorial de "
#define USER_MSJ_FINAL " es: "

#define ERROR_MSJ_NUM "ERROR!! el dato ingresado no valido"
#define ERROR_MSJ_LESS_ZERO "ERROR!! el dato ingresado MAYOR a zero"
#define ERROR_MSJ_LESS_MAX "ERROR!! el dato ingresado tiene que ser menor a 20"

long factorial(size_t);

int main(void){
    size_t num;
    int st, c;

    puts(USER_MSJ_ENTER);
    if(!(st=scanf("%lu", &num))){
        fprintf(stderr, "%s\n", ERROR_MSJ_NUM);
        return 1;
    }
    if(st==EOF)
        return 1;
    while((c=getchar()) !='\n');
    if(num<0) {
        fprintf(stderr, "%s\n", ERROR_MSJ_LESS_ZERO);
        return 1;
    }
    if(num > 20) {
        fprintf(stderr, "%s\n", ERROR_MSJ_LESS_MAX);
        return 1;
    }

    printf("%s%lu!%s%ld\n", USER_MSJ_FACTORIAL, num, USER_MSJ_FINAL,factorial(num));

    return 0;
}

long factorial(size_t n){
    if(n <= 1)
        return 1;
    else 
        return (n * factorial(n - 1));
}