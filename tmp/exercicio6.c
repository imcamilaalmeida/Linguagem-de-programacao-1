#include <stdio.h>
int main (void){
    int n;
    printf("Insira um número n: ");
    scanf("%i", &n);
    int i = 1;
    int soma = 0;
    while (i <= n){
        soma = soma + (i*i);
        i = i + 1;
    }
    printf("Somatório = %i \n", soma);
    return 0;
}