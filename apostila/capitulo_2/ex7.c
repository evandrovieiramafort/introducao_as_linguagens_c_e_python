#include <stdio.h>

/*Faça um programa em C que leia um número e indique se o número está compre-
endido entre 20 e 50 ou não.*/

int main(){
    int numero;
    printf("Digite o numero: ");
    scanf("%i", &numero);

    if(numero >= 20 && numero <= 50){
        printf("O numero esta entre 20 e 50");
    } else {
        printf("O numero nao esta entre 20 e 50");
    }

    return 0;
}