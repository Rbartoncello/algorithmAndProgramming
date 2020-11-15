#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void) {
  size_t i;
	
	double v[N];

	srand(time(NULL));
	
  for(i=0; i<N; i++) 
  {
    v[i] = rand() % RAND_MAX;
  }

	for(i=0; i<N; i++) 
    {
        printf("%.2f ", v[i]);
	}
    putchar('\n');

	return 0;
}
