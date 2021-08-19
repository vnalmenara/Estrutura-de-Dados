/******************************************************************************

ED03
8) Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. 
Sua assinatura deve ser: void troca(float *a, float *b);

*******************************************************************************/
#include <stdio.h>

void troca (float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    float x, y, *a, *b;
    
    x = 1.5;
    y = 5.5;
    a = &x;
    b = &y;
    
    troca(a, b);
    
    printf ("*a = %f\n", x);
    printf ("*b = %f\n", y);

    return 0;
}
