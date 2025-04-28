#include <stdio.h>
#include <stdlib.h>

/*15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
Faça um programa em C que leia o valor do produto e imprima o valor da venda.*/

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