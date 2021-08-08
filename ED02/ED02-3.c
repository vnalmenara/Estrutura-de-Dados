/******************************************************************************

ED02-3
3 - Fazer uma função recursiva que conta o número de ocorrências de um 
determinado caracter, caract(char c, char s[]).

*******************************************************************************/
#include <stdio.h>

int caract(char c, char s[]){
    
    if (s[0] == '\0'){
        return 0;
    }
    if (s[0] == c){
        return (1+caract(c,++s));
    } 
    else{
        return caract(c,++s);
    }
}

int main(){
    
    char s[30],c;
    int t;

    printf("Digite a string: ");
    scanf("%s", s);

    printf("Digite o caractere desejado: ");
    scanf(" %c", &c);
		
    t = caract(c, s);
    
    printf("\nO caracter foi encontrado %d vezes na string.", t);

}
