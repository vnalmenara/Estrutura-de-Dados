/******************************************************************************

ED03
6) Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços 
de duas variáveis inteiras, digamos min e max, e deposite nessas variáveis o 
valor de um elemento mínimo e o valor de um elemento máximo do vetor. 
Escreva também uma função main que use a função mm.

*******************************************************************************/
#include <stdio.h>

void mm(int v[], int *min, int *max){
    
    *max = v[0];
    *min = v[0];

    for(int i = 0; i <= sizeof(v); i++){
        if(v[i] > *max){
            *max = v[i];
        }
        else if(v[i] < *min){
            *min = v[i];
        }
    }
    
}

int main(){
    
    int v[] = {5,25,7,10,13,33,45,11,60};
    
    int x, y, *max, *min;
    
    max = &x;
    min = &y;
    
    mm(v, min, max);
    
    printf ("max = %d\n", x);
    printf ("min = %d\n", y);
    
    return 0;
}




