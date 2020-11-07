#include <stdio.h>

int main(void)
{
    int st, c;
    int grate1, grate2, one=0, two=0, three=0, four=0, five=0, students=5, acount=1;

    while (acount <= students)
        {
            printf("Ingrese primer nota del estudiante numero %i: \n", acount);
            if(!(st=scanf("%i", &grate1)))
                {
                    fprintf( stderr, "%s\n", "ERROR DEL INGRESO!!!!" );
                    return 1;
                }
            if(st == EOF)
                return 1;
            while ((c=getchar()) !='\n');
            
            if(grate1<=0)
                {
                    printf("ERROR!: Numero incorecto \nVuelva a ingesar el numero corecto\n");
                    continue;
                } if(grate1>5)
                    {
                        printf("ERROR!: Numero incorecto \nVuelva a ingesar el numero corecto\n");
                        continue;
                    }

            printf("Ingrese segunda nota del estudiante numero %i: \n", acount);
            if(!(st=scanf("%i", &grate2)))
                {
                    fprintf( stderr, "%s\n", "ERROR DEL INGRESO!!!!" );
                    return 1;
                }
            if(st == EOF)
                return 1;
            while ((c=getchar()) !='\n');

            if(grate2<=0)
                {
                    printf("ERROR!: Numero incorecto \nVuelva a ingesar el numero corecto\n");
                    continue;
                } if(grate2>5)
                    {
                        printf("ERROR!: Numero incorecto \nVuelva a ingesar el numero corecto\n");
                        continue;
                    }
            ++acount;
            
            
            switch (grate1)
                    {
                        case 1:
                            one+=1;
                            break;
                        case 2:
                            two+=1;
                            break;
                        case 3:
                            three+=1;
                            break;
                        case 4:
                            four+=1;
                            break;
                        case 5:
                            five+=1;
                            break;
                    }
                    switch (grate2)
                    {
                        case 1:
                            one+=1;
                            break;
                        case 2:
                            two+=1;
                            break;
                        case 3:
                            three+=1;
                            break;
                        case 4:
                            four+=1;
                            break;
                        case 5:
                            five+=1;
                            break;
                    }
        }
    printf("El numero uno se repitio: %i\n", one);
    printf("El numero dos se repitio: %i\n", two);
    printf("El numero tres se repitio: %i\n", three);
    printf("El numero cuatro se repitio: %i\n", four);
    printf("El numero cinto se repitio: %i\n", five);


    return 0;
}