/******************************************************************************

ED02-4
4 - Escreva uma função recursiva que produza o reverso de um string, reverse(char s[])

*******************************************************************************/
#include <stdio.h>

void reverse(char s[]) {
    
    if (s[0] != '\0'){
        reverse(&s[1]);
        printf(" %c", s[0]);
    }
}
 
int main() {
    
    char s[30], c;
    
    printf("Digite a string: ");
    scanf("%s", s);
    reverse(s);
}

