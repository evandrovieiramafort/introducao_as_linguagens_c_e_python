#include <stdio.h>

/*Faça um programa que leia um número e imprima uma das mensagens: "Maior
do que 20", "Igual a 20"ou "Menor do que 20*/

int main(){
    int numero;
    printf("Digite o numero: ");
    scanf("%i", &numero);

    if(numero < 20){
        printf("Menor do que 20");
    } else if (numero == 20) {
        printf("Igual a 20");
    } else {
        printf("Maior do que 20");
    }

    return 0;
}