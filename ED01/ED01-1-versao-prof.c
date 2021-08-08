#include <stdio.h>
#include <stdlib.h>

float somar(float a, float b){
	float c = a + b;
	return c;
}

float subtrair(float a, float b){
	float c = a - b;
	return c;
}

float multiplicar(float a, float b){
	float c = a * b;
	return c;
}


float dividir(float a, float b){
	float c = a / b;
	return c;
}


int main(int argc, char *argv[]) {
	printf("5 + 6 = %f \n", somar(5,6));
	printf("5 - 6 = %f \n", subtrair(5,6));
	printf("5 * 6 = %f \n", multiplicar(5,6));
	printf("5 / 6 = %f \n", dividir(5,6));
	
	return 0;
}
