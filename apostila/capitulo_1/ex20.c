#include <stdio.h>

/*Faça um programa em C que efetue a apresentação do valor da conversão em
real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o
valor da cotação do dólar.*/

int main() {
    float valor_dolar, cotacao_dolar, valor_real;

    printf("Insira o valor em dolar: ");
    scanf("%f", &valor_dolar);
    printf("Insira a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);

    valor_real = valor_dolar * cotacao_dolar;

    printf("O valor em real eh: %.2f\n", valor_real);
    return 0;
}
