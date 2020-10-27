#include <stdio.h>

int main(void) {

    size_t i;
    i = 0;

    while (i < 10)
    {
        i++;
        if (i==4){
            continue;
        }
        printf("%li \n", i);
    }

    for (i = 0; i < 10; i++)
    {
        if (i==4){
            continue;
        }

        printf("%li \n", i);
    }

    return 0;
}

