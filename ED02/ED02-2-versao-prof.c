#include <stdio.h>

int tamstring(char s[])
{
    if (s[0] == '\0'){ // \0 final de um string
        return 0;
    }
    printf("%x %c \n",&s[1], s[0]);
    return 1+tamstring(&s[1]); 
}

int main(void)
{
    char s[20];
    int t;
    printf("Tamanho de string\n\n");
    printf("\nDigite a string: ");
    scanf("%s", s);
    t=tamstring(s);
    printf("\n\nO tamanho eh %d", t);
    getch(); 
}
