#include<stdio.h>


int main(void)
{

    typedef enum status {TRUE, FALSE} bool_t;

    bool_t state = FALSE;

    printf("%u\n", state);

    return 0;
}