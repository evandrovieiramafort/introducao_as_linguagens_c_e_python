#include <stdio.h>
#include <stdlib.h>

/*14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
desconto do INSS segundo a tabela seguir:

Menor ou igual à R$600,00 -> Isento
Maior que R$600,00 e menor ou igual a R$1200,00 -> 20%
Maior que R$1200,00 e menor ou igual a R$2000,00 -> 25%
Maior que R$2000,00 -> 30%*/

int main() {
    float salario, desconto;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario <= 600.0) {
        printf("Isento de desconto!\n");
    } else if (salario > 600.0 && salario <= 1200.0) {
        desconto = salario * 0.20;
        printf("Desconto de (20%%) aplicado: %.2f\n", desconto);
    } else if (salario > 1200.0 && salario <= 2000.0) {
        desconto = salario * 0.25;
        printf("Desconto de (25%%) aplicado: %.2f\n", desconto);
    } else if (salario > 2000.0) {
        desconto = salario * 0.30;
        printf("Desconto de (30%%) aplicado: %.2f\n", desconto);
    } else {
        printf("Valor invalido!\n");
        exit(0);
    }

    return 0;
}