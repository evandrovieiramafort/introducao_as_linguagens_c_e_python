#include <stdio.h>

/*1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição,
caso o resultado seja maior que 10, apresentá-lo.*/

int main(){
    int n1, n2, soma;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite um numero: ");
    scanf("%i", &n2);

    soma = n1 + n2;

    if(soma > 10){
        printf("Numero: %i", soma);
    }

    return 0;
}