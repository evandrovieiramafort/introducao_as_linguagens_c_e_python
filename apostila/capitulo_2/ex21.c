#include <stdio.h>
#include <stdlib.h>

/*22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e
informe o consumo estimado de combustível, sabendo-se que um carro tipo C
faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.*/

int main() {
    float saldoMedio, credito = 0;

    printf("Digite o saldo médio do cliente: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio >= 0 && saldoMedio <= 500) {
        credito = 0;
    } else if (saldoMedio <= 1000) {
        credito = saldoMedio * 0.30;
    } else if (saldoMedio <= 3000) {
        credito = saldoMedio * 0.40;
    } else if (saldoMedio > 3000) {
        credito = saldoMedio * 0.50;
    } else {
        printf("Saldo inválido.\n");
        exit(0);
    }

    printf("\nSaldo médio: R$%.2f\n", saldoMedio);
    printf("Valor do crédito concedido: R$%.2f\n", credito);

    return 0;
}
