#include <stdio.h>
#include <stdlib.h>

/*
1-O que e um Tipo Abstrato de Dados (TAD) e qual a caracteristica fundamental na sua
utilização?
2. Quais as vantagens de se programar com TADs?
3. Crie um TAD que implemente o controle de uma conta bancaria,
 implemente funções para inicializar, deposito, sacar e imprimir o saldo.
*/

struct {
	char tipo;
	float valor;	
} typedef operacao;

struct {
  int agencia;
  int contaCorrente;
  float saldo;	
  int totalOp;		
  operacao extrato[50];	
} typedef conta;

void inicializar(conta *pConta){
	printf("Informe Ag. e CC:");
	scanf("%i %i", &pConta->agencia, &pConta->contaCorrente);
	printf("Informe saldo inicial:");
	scanf("%f", &pConta->saldo);
	pConta->totalOp = 0;
}

void depositar(conta *pConta){
	float valor;
	printf("Informe valor do deposito:");
	scanf("%f", &valor);
	pConta->saldo = pConta->saldo + valor;
	pConta->extrato[pConta->totalOp].tipo = 'D';
	pConta->extrato[pConta->totalOp].valor = valor;
	pConta->totalOp++;
}

void sacar(conta *pConta){
	float valor;
	printf("Informe o valor do sacado:");
	scanf("%f", &valor);
	if(valor> pConta->saldo){
		printf("saldo insuficiente !!!");
	}
	else {
		pConta->saldo = pConta->saldo - valor;
		pConta->extrato[pConta->totalOp].tipo = 'S';
		pConta->extrato[pConta->totalOp].valor = valor;
		pConta->totalOp++;
	}
}

void imprimir(conta *pConta){
	int x;
	printf("Ag. %i CC. %i \n", pConta->agencia, pConta->contaCorrente);
	printf("Saldo: %.2f \n", pConta->saldo);
	for(x=0; x<pConta->totalOp; x++){
		printf("%c %.2f \n", pConta->extrato[x].tipo, pConta->extrato[x].valor);
	}	
}

int main(int argc, char *argv[]) {
	conta c1;
	inicializar(&c1);
	depositar(&c1);
	depositar(&c1);
	sacar(&c1);
	depositar(&c1);
	imprimir(&c1);
	return 0;
}
