#include <stdio.h>

#define MAX_STR 1222
#define MAXI "El numero mayor fue: "
#define MINI "El numero menor fue: "

enum extreme_t {
    MAXIMUM,
    MINIMUN
};

int main(void){
    enum extreme_t;

    char vector[MAX_STR]={
        1, 2, 3, 5, 8, 85, 110,-1,5 
    };

    int MAX, MIN;
    int i;

    MAX=MIN=vector[0];

    for (i = 1; vector[i] != '\0'; i++)
    {
        if (vector[i]<MIN)
        {
            MIN = vector[i];
        } else
        {
            if (vector[i]>MAX)
            {
                MAX = vector[i];
            }
        }
    }
    
    fprintf(stdout, "%s%d\n", MAXI, MAX);
    fprintf(stdout, "%s%d\n", MINI, MIN);

    return 0;
    
}