#include <stdio.h>

int main(void){
    float milha = 1.6;
    float velocidade;
    printf("Insira a velocidade em mph: ");
    scanf("%f", &velocidade);
    float quilometro = velocidade * milha;
    if (quilometro < 80){
        printf("ACELERE\n");
    }
    else if (quilometro > 100)
    {
        printf("DESACELERE\n");
    }
    else {
        printf("MANTENHA\n");
    }
    return 0;
}