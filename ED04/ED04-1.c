/******************************************************************************

ED04
1- Reescreva o programa do caixa eletrônico utilizando ponteiro de funções.
Faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será apresentado 
uma lista de operações:

1-Saldo
2-Saque
3-Deposito

Ao iniciar o programa determine um valor inicial para a variável saldo 
(utilize um ponteiro para manter o valor do saldo), se o cliente escolher a opção 1 
mostre o valor do saldo, caso escolha o valor 2 leia o valor a ser sacado e verifique 
se existe saldo suficiente, se o saldo for maior ou igual, 
deduza da variável saldo o valor solicitado, caso não haja saldo suficiente mostre 
a mensagem “Saldo Insuficiente”, caso a opção 3 seja escolhida adicione o valor informado 
de deposito ao saldo. 

Implemente um laço faça enquanto que verifique se o usuário deseja continuar, 
caso a variável coletada for igual 1 reinicie o laço, mantendo o valor do saldo

*******************************************************************************/
#include <stdio.h>

int main()
{
    int menu;
    float saldo, saque, deposito;
    float *p;
    saldo = 1000;
    p = &saldo;
    
    do{
        printf ("\nEscolha uma opção: (1) Saldo - (2) Saque - (3) Depósito:  ");
        scanf ("%i", & menu);
        
        switch (menu){
            case 1:{
                printf ("Seu saldo é: R$ %.2f", *p);
            break;
            }
    
            case 2:{
                printf ("Informe o valor que gostaria de sacar: R$ ");
                scanf ("%f", & saque);
                if (saque <= *p){
                    *p -= saque;
                    printf ("Saldo suficiente. Total sacado: R$ %.2f\nValor remanescente: R$ %.2f", saque, *p);
                }
                else{
                    printf ("Saldo Insuficiente. Operação Cancelada");
                }
            break;
            }
    
            case 3:{
                printf ("Informe o valor que gostaria de depositar: R$ ");
                scanf ("%f", & deposito);
                *p += deposito;
                printf ("Valor total em conta após o depósito: R$ %.2f", *p);
            break;
            }
    
            default:{
                printf ("Opção inválida!");
            break;
            }
        }
        
        printf ("\nDeseja continuar? (1) SIM ou (2) NÃO: ");
        scanf ("%i", & menu);
        
    }while(menu == 1);
    
    
    return 0;
}
