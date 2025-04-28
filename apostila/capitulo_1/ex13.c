#include <stdio.h>

/*Faça um programa em C que leia o saldo de uma conta poupança e imprima o
novo saldo, considerando um reajuste de 2%.*/

int main() {
    float saldo;
    printf("Digite um numero: ");
    scanf("%f", &saldo);
    
    printf("Quadrado: %.2f", saldo + (saldo * 0.02));
    return 0;
}