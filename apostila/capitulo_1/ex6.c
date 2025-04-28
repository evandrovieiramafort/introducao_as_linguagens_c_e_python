#include <stdio.h>

/*Faça um programa em C que leia um número inteiro e imprima o seu antecessor
e o seu sucessor.*/

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Antecessor: %d\nSucessor: %d\n", numero - 1, numero + 1);
    return 0;
}
