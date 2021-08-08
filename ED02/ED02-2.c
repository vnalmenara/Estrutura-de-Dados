/******************************************************************************

ED02-2
2 - Escrever uma função recursiva que retorna o tamanho de um string, tamstring(char s[])

*******************************************************************************/
#include <stdio.h>

int tamstring(char s[]){
    if (s[0] == '\0'){
        return 0;
    }
    else{
        return 1+tamstring(&s[1]);
    }
}
    
int main(){
    
    char s[20];
    int tamanho;
    
    printf("Digite a string: ");
    scanf("%s", s);
    
    tamanho = tamstring(s);
    
    printf("O tamanho é %d.", tamanho);
    
}
