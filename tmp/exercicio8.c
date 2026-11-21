#include <stdio.h>
int main(void){
int n1;
printf("Insira o número 1: ");
scanf("%i", &n1);
int n2;
printf("Insira o número 2: ");
scanf("%i", &n2);
while (n1 < n2){
    n1 = n1 + 1;
    printf("%i\n",n1);
}
return 0;
}