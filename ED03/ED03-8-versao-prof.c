#include <iostream>


/* 8- Escreva uma fun��o chamada troca que troca os valores dos
par�metros recebidos. Sua assinatura deve ser:void troca(float *a, float *b); */
void troca(float *a, float *b){
	float aux;
	aux = *a;
	*a = *b;
	*b = aux;	
}

int main(int argc, char** argv) {
	float x=6, y=9;
	
	printf("x=%f, y=%f \n", x, y);
	troca(&x, &y);
	printf("x=%f, y=%f \n", x, y);
	return 0;
}


