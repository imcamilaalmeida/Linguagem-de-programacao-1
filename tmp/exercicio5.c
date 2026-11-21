#include <stdio.h>

int main(void){
    int soma = 0;
    int numero;
    printf("Insira o número: ");
    scanf("%i",&numero);
    while (numero != 0) {
        soma = soma + numero;
        printf("Insira o número: ");
        scanf("%i",&numero);
    }
    printf("Soma: %i \n",soma);
    return 0;
}