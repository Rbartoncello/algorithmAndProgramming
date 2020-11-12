#include <stdio.h>
#include <string.h>

#define MSG_STR_1 "S1: "
#define MSG_STR_2 "S2: "

int main(void){
    char str1[]={"HOLA1234"}, str2[]={"LA"};

    puts(MSG_STR_1);
    puts(str1);
    puts(MSG_STR_2);
    puts(str2);
    printf("%s%s\n", "Resultado de busqueda: ", strstr(str1, str2));

    return 0;
}