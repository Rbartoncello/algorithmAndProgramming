#include <stdio.h>
#include <string.h>

#define MAX_STR 100
#define MSG_USER_1 "Ingrese un texto"
#define MSG_USER_2 "Ingrese otro texto"
#define MSG_USER_3 "Ingrese un numero"
#define MSG_ERROR "ERROR!! al ingre de dato numerico"
int main(void){
    char str[MAX_STR], str2[MAX_STR];
    int num, st, c, i=0, j=0;

    puts(MSG_USER_1);
    fgets(str, sizeof(str)+2,stdin);
    puts(MSG_USER_2);
    fgets(str, sizeof(str)+2,stdin);
    puts(MSG_USER_3);
    if(!(st=scanf("%i", &num)))
        {
            fprintf(stderr, "%s", MSG_ERROR);
            return 1;
        }
    if (st == EOF)
        return 1;
    while ((c=getchar())!='\n');


    while ((str[i]=str2[j])!='\0')
        {
            str[num] = str2[j];
            num++;
            i++;
            j++;
        }

    
    puts(str);
    puts(str2);


    return 0;
}