#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MSG_WELCOME_USER "Ingrece la accion que desee: "
#define MSG_ERROR "Error!! al ingreso de entero"
#define MSG_QUERY_USER "Ingrese el texto: "

#define UPPER_ID 1
#define LOWER_ID 2

#define UPPER_NAME "Mayusculas"
#define LOWER_NAME "Minusculas"

#define MAX_STR 100

typedef enum {
    FMT_UPPER,
    FMT_LOWER
} format_t;

int main(void){
    format_t format;
    char str[MAX_STR], strup[MAX_STR], strlow[MAX_STR];
    int c, st, id;
    size_t i;

    puts(MSG_WELCOME_USER);
    printf("\t%d)%s\n\t%d)%s\n", UPPER_ID, UPPER_NAME, LOWER_ID, LOWER_NAME);
    if(!(st=scanf("%i", &id)))
        {
            fprintf(stderr, "%s\n", MSG_ERROR);
            return 1;
        }
    if(st==EOF)
        return 1;
    while((c=getchar()) !='\n');

    switch (id)
    {
    case UPPER_ID:
        format = FMT_UPPER;
        break;
    case LOWER_ID:
        format = FMT_LOWER;
        break;
    default:
        fprintf(stderr, "%s\n", MSG_ERROR);
        return 1;
        break;
    }
    puts(MSG_QUERY_USER);
    scanf("%s", str);
    printf("El texto ingresado es: %s\n", str);

     for (i = 0; str[i] != '\0'; ++i)
    {
        strlow[i]   = tolower(str[i]);
        strup[i]    = toupper(str[i]);
    }

    switch (format)
    {
    case FMT_UPPER:
        printf("%s\n", strup);
        break;
    case FMT_LOWER:
        printf("%s\n", strlow);
        break;
    default:
        break;
    }

    return 0;
}