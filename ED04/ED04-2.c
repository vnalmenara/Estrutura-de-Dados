/******************************************************************************

ED04
2- Crie um programa em C que adicione dinamicamente uma nova posição e 
um vetor que armazene a quantidade de clientes por dia, ao final do programa 
calcule a media destes clientes, mostre a quantidade de dias e limpe a memoria.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    
    int *v;
    int dia=0, continuar;
    float media_clientes;
    
    v = (int*) malloc(1 * sizeof(int));
    
    do{
        
        dia++;
           
        v = (int*) realloc(v, dia * sizeof(int));
        
        printf ("\nInforme o número de clientes do dia %i: ", dia);
        scanf ("%i", &v[dia - 1]);
        
        printf ("\nDeseja continuar? (1) SIM ou (2) NÃO: ");
        scanf ("%i", &continuar);
        
        
    }while(continuar == 1);
    
    for(int i = 0; i < dia; i++){
        media_clientes += v[i];
    }
    
    media_clientes = media_clientes / dia;
    
    printf ("\nA média de clientes nestes %i dias foi de %.2f.", dia, media_clientes);
    
    free(v);

    return 0;
}
