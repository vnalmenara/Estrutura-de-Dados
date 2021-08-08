/******************************************************************************
ED01-1
1-Crie um programa em linguagem C com 4 funções (somar, subatrair, multiplicar e dividir),
recebendo os parametros do tipo float A e float B, o retorno de cada função deve ser o valor da operação matemática.

*******************************************************************************/
#include <stdio.h>

float soma (float a, float b){
    return a + b;
}

float subtrai (float a, float b){
    return a - b;
}

float multiplica (float a, float b){
    return a * b;
}

float divide (float a, float b){
    return a / b;
}

int main(){
    
    int opcao=0;
    float a, b, resposta;
    
    printf("Escolha a operação matemática desejada:");
    printf("\n1 - Adição");
    printf("\n2 - Subtração");
    printf("\n3 - Multiplicação");
    printf("\n4 - Divisão");
    printf("\n0 - Sair\n");
    scanf("%d", &opcao);
    
    if(opcao <= 0 || opcao > 4){
        printf("Você escolheu sair do programa :)");
        return 0;
    }
    
    printf("Digite o primeiro número da operação:");
    scanf("%f", &a);
    
    printf("Digite o segundo número da operação:");
    scanf("%f", &b);
    
    switch(opcao){
        case 1:
        resposta = soma(a,b);
        break;
        
        case 2:
        resposta = subtrai(a,b);
        break;
        
        case 3:
        resposta = multiplica(a,b);
        break;
        
        case 4:
        resposta = divide(a,b);
        break;
        
    }
    
    printf("O resultado da operação escolhida é: %.2f", resposta);
    return 0;
}
