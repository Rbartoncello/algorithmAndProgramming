#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define ERR_MSJ_NULL_POINTER "ERORR!! Puntero nulo"
#define N 20

typedef enum {
    OK,
    ERR_NULL_POINTER
} status_t;

int is_char(char c, char t) {
  return c == t;
}

status_t left_trim (char *);
status_t right_trim (char *);
status_t full_trim (char *);

int main(void){
    char str[N] = "....hola....",
            str2[N] = "....hola....",
            str3[N] = "....hola....";

    puts(str);
    printf("Len: %d \n", (int)strlen(str));

    if (left_trim(str) != OK){
        fprintf(stderr, "%s", ERR_MSJ_NULL_POINTER);
        return ERR_NULL_POINTER;
    };
    if (right_trim(str2) != OK){
        fprintf(stderr, "%s", ERR_MSJ_NULL_POINTER);
        return ERR_NULL_POINTER;
    };
    if (full_trim(str3) != OK){
        fprintf(stderr, "%s", ERR_MSJ_NULL_POINTER);
        return ERR_NULL_POINTER;
    };

    return OK;
}

status_t left_trim (char *s){
    size_t i;

    if(s == NULL)
      return ERR_NULL_POINTER;

    for(i = 0; is_char('.', s[i]); i++);

    memmove(s, &(s[i]), strlen(s) - i + 1);
    
    puts(s);
    printf("L: %d \n", (int)strlen(s));
    putchar('\n');
    return OK;
}
status_t right_trim (char *s){
    int i;

    if(s == NULL)
      return ERR_NULL_POINTER;
      
    for(i = strlen(s) - 1; i >= 0 && is_char('.', s[i]); i--);
    s[i+1] = '\0';

    puts(s);
    printf("R: %d \n", (int)strlen(s));
    putchar('\n');
    return OK;
}
status_t full_trim (char *s){
    status_t st;

    if(s == NULL)
      return ERR_NULL_POINTER;

    st = left_trim(s);
    if (st != OK){
        return ERR_NULL_POINTER;
    };
    st = right_trim(s);
    if (st != OK){
        return ERR_NULL_POINTER;
    };

    puts(s);
    printf("F: %d \n", (int)strlen(s));
    putchar('\n');
    return OK;
}