#include <stdio.h>

/*Faça um programa em C que leia o valor de um produto, o percentual do des-
conto desejado e imprima o valor do desconto e o valor do produto subtraindo o
desconto.*/

int main() {
    float valorOriginal, percentual;
    
    printf("Digite o valor: ");
    scanf("%f", &valorOriginal);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual);
    
    float desconto = valorOriginal * (percentual / 100);
    float novoValor = valorOriginal - desconto;
    
    printf("Valor original: %.2f\nDesconto: %.2f\nNovo valor: %.2f", valorOriginal, desconto, novoValor);
    return 0;
}

