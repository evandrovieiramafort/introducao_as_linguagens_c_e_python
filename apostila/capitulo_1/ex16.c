#include <stdio.h>

/*Faça um programa em C que calcule o reajuste do salário de um funcionário. Para
isso, o programa deverá ler o salário atual do funcionário e ler o percentual de
reajuste. Ao final imprimir o valor do novo salário.*/

int main() {
    float valorOriginal, percentual;
    
    printf("Digite o valor: ");
    scanf("%f", &valorOriginal);
    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);
    
    float aumento = valorOriginal * (percentual / 100);
    float novoValor = valorOriginal + aumento;
    
    printf("Valor original: %.2f\naumento: %.2f\nNovo valor: %.2f", valorOriginal, aumento, novoValor);
    return 0;
}