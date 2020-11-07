#include<stdio.h>

int main(void)
{
    typedef enum {ERROR, OK} status_t;

    status_t pass = OK;

    printf("%u\n", pass);

    return 0;
}