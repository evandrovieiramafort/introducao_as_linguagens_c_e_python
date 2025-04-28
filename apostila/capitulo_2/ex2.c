#include <stdio.h>

/*2. Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o
valor somado seja maior que 20, este deverá ser apresentado somando-se a ele
mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5.*/

int main(){
    int n1, n2, soma;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite um numero: ");
    scanf("%i", &n2);

    soma = n1 + n2;

    if(soma > 20){
        printf("Numero: %i", soma + 8);
    } else {
        printf("Numero: %i", soma - 8);
    }

    return 0;
}