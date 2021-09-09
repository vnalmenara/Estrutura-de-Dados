/******************************************************************************

ED05
3 - Crie um TAD que implemente o controle de uma conta bancária, implemente 
funções para inicializar, deposito, sacar e imprimir o saldo.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct{
    int numConta;
    char nomeCliente[50];
    float saldo;
} typedef contaBancaria;

void incializa(contaBancaria *conta){
    conta->numConta = 123;
    strcpy(conta->nomeCliente, "Ana Maria");
    conta->saldo = 1000;
}

void deposito(contaBancaria *conta){
    float valor;
	printf("\nInforme o valor a ser depositado: ");
	scanf("%f", &valor);
    conta->saldo += valor;
    printf("\nDepósito realizado com sucesso.");
}

void saque(contaBancaria *conta){
    float valor;
	printf("\nInforme o valor a ser sacado: ");
	scanf("%f", &valor);
    if(conta->saldo < valor){
        printf("\nSaldo insuficiente. Operação cancelada.");
    }
    else{
        conta->saldo -= valor;
        printf("\nSaque realizado com sucesso."); 
    }
}

void impressao(contaBancaria *conta){
    printf("O(a) cliente %s de conta bancária %i possui R$ %.2f de saldo.",
    conta->nomeCliente, conta->numConta, conta->saldo);
}


int main()
{
    
    contaBancaria conta;
    int operacao;
    
    incializa(&conta);
    
	do{
		printf("\nInforme a operaçao a ser realizada\n1-Saldo\n2-Saque\n3-Depósito\n4-Sair\n");
		scanf("%i", &operacao);	
		
		switch(operacao){
		    case 1:{
		    	impressao(&conta);
				break;
			}
			case 2:{
				saque(&conta);
				break;
			}
			case 3:{
				deposito(&conta);
				break;
			}
			case 4:{
				printf("Sair.");
				break;
			}
			default:{
				printf("Operação invalida.");
				break;
			}
		}
	}while(operacao<4);
    
    return 0;
}
