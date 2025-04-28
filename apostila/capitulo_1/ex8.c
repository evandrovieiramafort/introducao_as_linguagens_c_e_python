#include <stdio.h>

/*Faça um programa em C que leia dois números inteiros e imprima a subtração
deles.*/

int main() {
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite um numero: ");
    scanf("%i", &n2);

    int sub = n1 - n2;

    printf("A subtracao entre %i e %i eh %i", n1, n2, sub);
    return 0;
}
