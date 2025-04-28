#include <stdio.h>
#include <stdlib.h>

/*11. Faça um programa que leia 3 números e imprima o maior deles.*/

int main() {
    int n1, n2, n3, maior;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);
    printf("Digite um numero: ");
    scanf("%d", &n3);

    maior = n1;

    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    printf("Maior numero: %d\n", maior);

    return 0;
}