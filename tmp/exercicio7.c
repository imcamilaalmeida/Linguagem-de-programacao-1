#include <stdio.h>
#include <string.h>

int main(void){
    int times = 0, pontoMais = 0, pontoMenos = 0;
    char nome[20], timeMenos[20] = "" , timeMais[20] = "";
    int pontos, vitoria, derrota, empate;

    while (times < 20){
        printf("Insira o nome do time: ");
        scanf("%19s", nome);
        printf("Insira a quantidade de vitórias: ");
        scanf("%i", &vitoria);
        printf("Insira a quantidade de empates: ");
        scanf("%i", &empate);
        printf("Insira a quantidade de derrotas: ");
        scanf("%i", &derrota);
        pontos = (3 * vitoria) + (1 * empate) + (0 * derrota);
        if (pontos > pontoMais){
            pontoMais = pontos;
            strcpy(timeMais, nome);
        }
        else if (pontos < pontoMenos){
            pontoMenos = pontos;
            strcpy(timeMenos, nome);
        }
        times = times + 1;
    }
    printf("O time com mais pontos é o %19s com %i pontos e o time com menos pontos é o %19s com %i pontos. \n", timeMais, pontoMais, timeMenos, pontoMenos);
    return 0;
}