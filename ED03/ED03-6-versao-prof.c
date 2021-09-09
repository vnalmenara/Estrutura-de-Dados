#include <stdio.h>
#include <stdlib.h>

/* 
6- Escreva uma fun��o mm que receba um vetor inteiro v[0..n-1] e os
endere�osde duas vari�veis inteiras, digamos min e max, e deposite nessas
vari�veis o valor de um elemento m�nimo e o valor de um elemento m�ximo do
vetor.Escreva tamb�m uma fun��o main que use a fun��o mm.
 */

int main(int argc, char *argv[]) {
	int min, max;
	int v[] = {1,3,6,8,2,9,3,7,12,87};
	mm(v, &min, &max);
	printf("Min=%i, Max=%i \n", min, max);
	return 0;
}

void mm(int *p, int *pMin, int *pMax){
	int x;
	*pMin = *p;
	*pMax = *p;
	for(x=0; x<10; x++){
		if(*(p+x)<*pMin) *pMin = *(p+x); //v[x]
		if(*(p+x)>*pMax) *pMax = *(p+x); 
	}
}
