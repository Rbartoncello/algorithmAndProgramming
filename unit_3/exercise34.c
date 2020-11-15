#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR 8

int main(void)
{
	char v[MAX_STR] = {1, 2, 3, 4, 9, 15};
	size_t i, len, N;

    N = strlen(v);
	
	for( i = 0, len = 1 ; i < (MAX_STR-1) ; i++ )
	{
		
		if(v[i] > v[i+1])
		{
			break;
		}
		len++;
	}
    fprintf(stdout, "\t%lu\t\n", N);
    fprintf(stdout, "\t%lu\t\n", len);
	if(len == N)
	printf("El arreglo esta oredenado en orden creciente\n");
	else
	printf("El arreglo no esta ordenado\n");

		for( i = 0 ; i < N	 ; i++ )
	{
		printf("%d ",v[i]);
	}
	printf("\n");

	return 0;
}