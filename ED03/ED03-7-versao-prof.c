#include <stdio.h>
#include <stdlib.h>

/* 
Suponha que v � um vetor. Descreva a diferen�a conceitual entre
as express�es v[3] e v + 3.
 */

int main(int argc, char *argv[]) {
	int v[10], *p;
	v[3] = 8;
	p = v;
	printf("v[3]  = %d \n", v[3]);
	printf("v + 3 = %x \n", v + 3 );
	printf("*(p+3) = %d, %x \n", *(p+3), p+3);

	return 0;
}
