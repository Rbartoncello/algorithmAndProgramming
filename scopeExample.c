#include<stdio.h>

void a (void);
void b (void);
void c (void);

int x = 1;

int main (void)
{
    int x = 5;

    printf("Local x fuera del alcance del main is %d\n", x);

    {
        int x = 7;
        printf("Local x dentro del alcance de main is %d\n",x);
    }

    printf("Local x fuera del alcance del main is %d\n", x);

    a();
    b();
    c();
    a();
    b();
    c();

    printf("Local x en el main es %d\n", x);

    return 0;

}

void a (void){

    int x = 25;

    printf("Local x en a es %d after de entrar en a\n ", x);
    ++x;
    printf("Local x en a es %d antes de salir en a\n ", x);
}
void b (void){

    static int x = 50;

    printf("Local x en a es %d after de entrar en a\n ", x);
    ++x;
    printf("Local x en a es %d antes de salir en a\n ", x);
}
void c (void){
    
    printf("Local x en a es %d after de entrar en a\n ", x);
    x *= 10;
    printf("Local x en a es %d antes de salir en a\n ", x);
}
