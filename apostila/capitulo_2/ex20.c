#include <stdio.h>
#include <stdlib.h>

/*20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes
de acordo com o saldo médio no último ano. Faça um programa que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo médio e o valor
de crédito.

Saldo Médio     Percentual
de 0 a 500      nenhum crédito
de 501 a 1000   30% do valor do saldo médio
de 1001 a 3000  40% do valor do saldo médio
acima de 3001   50% do valor do saldo médio*/

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
