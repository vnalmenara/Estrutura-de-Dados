/******************************************************************************

ED02-1
1- escreva uma função recursiva para calcular o valor de uma base x elevada a um expoente y.

*******************************************************************************/
#include <stdio.h>


int pow(int x, int y){
	
	int retorno;
	
    printf("y=%i \n", y);
	
	if(y == 0){
		printf("saida =>1 \n");
		return 1;
	} 
	else{
		retorno = pow(x, y-1);
		printf("%i x %i = %i \n", x, retorno, (x*retorno));
		return x*retorno;	
	}		
}

int main()
{
    int resultado, x, y;
    
    printf("Informe a base do cálculo exponencial: ");
    scanf("%i", &x);
    
    printf("Informe o expoente do cálculo exponencial: ");
    scanf("%i", &y);
    
    resultado = pow(x, y);
    printf("%i elevado a %i é = %i \n", x, y, resultado);
    
    return 0;
}
