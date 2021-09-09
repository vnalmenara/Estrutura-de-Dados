#include <stdio.h>
#include <stdlib.h>

/* 
3- Crie um programa em C que adicione dinamicamente uma nova posição 
e um vetor que armazene a qtd de clientes por dia, 
ao final do programa calcule a media destes clientes,
 mostre a quantidade de dias e limpe a memoria.
*/

int main(int argc, char *argv[]) {
	int continua, cont=0, x;
	float media=0;
	int *vD;
	
	do{
		cont++;
		if(cont==1){
			vD = (int*)malloc(cont*sizeof(int));
		} else {
			vD = (int*)realloc(vD,cont*sizeof(int));
		}
		printf("Informe a qtd de pessoas dia %d:", cont);
		scanf("%d", &vD[cont - 1]); // (vD+cont)
		media+= vD[cont-1];
	
		printf("deseja continuar 1-Sim 0-Nao:");
		scanf("%i", &continua);	
	} while(continua==1);
	media = media / cont;
	printf("Media de pessoas=%f, Total de dias=%d \n", media, cont);
	for(x=0;x<cont;x++){
		printf("Valor do dia %i = %i \n", (x+1), vD[x]);
	}
	free(vD);
	return 0;
}
