#include <stdio.h>
#include <stdlib.h>

/* 
5- Suponha que os elementos do vetor v s�o do tipo int e cada int
ocupa 8 bytes no seu computador. Se o endere�o de v[0] � 55000, qual o
valor daexpress�o v + 3?
 */

int main(int argc, char *argv[]) {
	int vet[10], *p;
	p = vet;
	printf("pos. 0 %x \n", p);
	printf("pos. 3 %x \n", (p + 3));
	printf("pos. 0 %x \n", vet);
	printf("pos. 3 %x \n", (vet + 3));
	return 0;
}
