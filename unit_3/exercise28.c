#include <stdio.h>
#include <string.h>

#define MAX_STR 100
#define MSG_USER_1 "Ingrese un numero"
#define MSG_ERROR "ERROR!! al ingre de dato numerico"
int main(void){
    char vector[MAX_STR];
    int st, c, i=0;

    puts(MSG_USER_1);
    
    fgets(vector, sizeof(vector)+2,stdin);

    fprintf(stdout, "%s\n", vector);


    return 0;
}