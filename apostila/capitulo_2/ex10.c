#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em C que leia três números inteiros e imprima os três em
ordem crescente.*/

int main() {
    int n1, n2, n3, temp;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    printf("Digite um numero: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 > n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("Ordem crescente: %d %d %d\n", n1, n2, n3);

    return 0;
}