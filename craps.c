#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main (void)
{
    int gameStatus, sum, myPoint;

    srand(time(NULL));
    sum = rollDice();

    switch(sum)
    {
        case 7: case 11:
            gameStatus = 1;
            break;
        case 2: case 3: case 12:
            gameStatus = 2;
            break;
        default:
            gameStatus = 0;
            myPoint = sum;
            printf("La suma de los puntos fue: %d\n", myPoint);
            break;
    }

    while(gameStatus == 0)
    {
        sum = rollDice();

        if(sum == myPoint)
            gameStatus = 1;
        else
            if(sum == 7)
                gameStatus = 2;
    }

    if(gameStatus == 1)
        printf("Has ganado\n");
    else
        printf("Has pedido\n");

    return 0;
}

int rollDice(void)
{
    int die1, die2, workSum;

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;
    printf("El jugador tiro %d + %d = %d\n", die1, die2, workSum);
    return workSum;
}


