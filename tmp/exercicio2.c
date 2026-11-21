#include <stdio.h>

int main (void) {
    int prim_valor;
    int seg_valor;
    printf("Insira o primeiro valor: ");
    scanf("%i", &prim_valor);
    printf("Insira o segundo valor: ");
    scanf("%i", &seg_valor);
    if (prim_valor > seg_valor){
        printf("O primeiro valor %i é o maior\n", prim_valor);
    }
    else {
        printf("O segundo valor %i é o maior\n",seg_valor);
    }
    return 0;
}