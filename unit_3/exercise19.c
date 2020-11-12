#include <stdio.h>
#include <string.h>

int main(void){

    char a[] = "hola";
    char b[] = "mundo";
    if(a==b) printf("Son iguales.");  
    /* 
        Esto esta mal ya que al se arrais tipo char para qie pueda usar esa condicion 
        necesitario que compara elemento por elemento del array, con algun tipo de ciclo
        (for, white. etc) de la sigiente forma a[i] == b[i]
     */
    else printf("Son distintas.");

    return 0;
}


