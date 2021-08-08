/******************************************************************************
ED01-2
2-Crie um program em linguagem C que crie uma matriz de 10,3, armazene a nota P1, 
P2 e MEDIA nas respectivas colunas, crie uma função passando a matriz como parametro 
para identificar a maiorNotaP1, a maiorNotaP2 e a maiorMedia e mediaSala.

*******************************************************************************/
#include <stdio.h>

void relatorioTurma(float matriz[10][3]){
    
    int l;
    float maiorNotaP1=0, maiorNotaP2=0, maiorMedia=0, mediaSala=0, soma=0;
    
    for(l=0; l < 10; l++){
        if(matriz[l][0] > maiorNotaP1){
            maiorNotaP1 = matriz[l][0];
        }
        
        if(matriz[l][1] > maiorNotaP2){
            maiorNotaP2 = matriz[l][1];
        }
        
        if(matriz[l][2] > maiorMedia){
            maiorMedia = matriz[l][2];
        }
        
        soma = soma + matriz[l][2];
    }
    
    mediaSala = soma / 10;
    
    printf("\nA maior nota da P1 foi: %.2f", maiorNotaP1);
    printf("\nA maior nota da P2 foi: %.2f", maiorNotaP2);
    printf("\nA maior média foi: %.2f", maiorMedia);
    printf("\nA média da sala foi: %.2f", mediaSala);
}

void imprimeMatriz(float matriz[10][3]){
   
    int l;
    
    printf("Aluno     P1         P2     Média");
    
    for(l=0; l < 10; l++){
        printf("\n%2d        %2.2f      %2.2f      %2.2f", l+1, matriz[l][0], matriz[l][1] ,matriz[l][2]);
    }
}

int main()
{
    int l, c;
    float matriz[10][3];
    
    for(l=0; l < 10; l++){
        for(c=0; c < 2; c++){
            printf("Digite a nota da P%d do Aluno %d: ", c+1, l+1);
            scanf("%f", &matriz[l][c]);
        }
        
        matriz[l][2] = (matriz[l][0] + matriz[l][1]) / 2;
    }

    imprimeMatriz(matriz);
    relatorioTurma(matriz);
    
    return 0;
}
