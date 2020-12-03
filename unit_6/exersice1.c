#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    size_t i;
    fprintf(stdout, "%s%d\n", "argc: " , argc);
    for (i = 0; i < argc; i++)
    {   
        fprintf(stdout, "argv[%ld] = %s \n",  i, argv[i]);
    }
    
    return EXIT_SUCCESS;
		
}