#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <locale.h>

struct historico{
    float nota1;
    float nota2;
    float media;
};

void overviewMencoes(struct historico boletim[], int contadorMencoes){
    int mencoes;
    float maiorNota1 = 0, maiorNota2 = 0, maiorMedia = 0, mediaSala = 0;

    for(mencoes = 0; mencoes <  contadorMencoes; mencoes++){
        if (boletim[mencoes].nota1 > maiorNota1){
            maiorNota1 = boletim[mencoes].nota1;
        }
        if (boletim[mencoes].nota2 > maiorNota2){
            maiorNota2 = boletim[mencoes].nota2;
        }
        if (boletim[mencoes].media > maiorMedia){
            maiorMedia = boletim[mencoes].media;
        }

        mediaSala += boletim[mencoes].media;
    }

    mediaSala = mediaSala / 10;

    printf("\nRESULTADOS\n");
    printf("\nA maior nota 01 e: %.2f", maiorNota1);
    printf("\nA maior nota 02 e: %.2f", maiorNota2);
    printf("\nA maior media e: %.2f", maiorMedia);
    printf("\nA media sala e: %.2f", mediaSala);
}

void cadastraMencoes(struct historico boletim[], int contadorMencoes){
    float media;
    int mencoes;

    printf("\nPARA INICIAR, INSIRA 10 NOTAS\n");

    for(mencoes = 0; mencoes < contadorMencoes; mencoes++){
        printf("\nInsercao %i\n", mencoes + 1);

        printf("\nInsira a nota 01: ");
        scanf("%f", &boletim[mencoes].nota1);

        printf("\nInsira a nota 02: ");
        scanf("%f", &boletim[mencoes].nota2);

        media = (boletim[mencoes].nota1 + boletim[mencoes].nota2) / 2;
        boletim[mencoes].media = media;

        printf("\nMedia: %.2f\n", media);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    struct historico boletim[10];

    int contadorMencoes = 10;

    printf("\nPROGRAMA BOLETIM\n");

    cadastraMencoes(boletim, contadorMencoes);
    overviewMencoes(boletim, contadorMencoes);

    return 0;
}