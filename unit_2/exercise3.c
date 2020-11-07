#include<stdio.h>

enum day_t {M, TU, W, TH, F, SA, SO};

int main(void)
{
    enum day_t days;

    for (days = M; days <= SO; days++)
    {
        printf("%d\n", days);
    }
    

    return 0;
}