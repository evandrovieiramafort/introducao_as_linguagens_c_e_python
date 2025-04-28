#include <stdio.h>

/*Faça um programa em C que calcule o valor de uma prestação em atraso. Para
isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros
e o período de atraso. Ao final, o programa deve imprimir o valor da prestação
atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso,
o valor da prestação acrescido dos juros. Considere juros simples.*/

int main() {
    float prestacao, taxa_juros, periodo_atraso, juros, prestacao_com_juros;

    printf("Insira o valor da prestacao vencida: ");
    scanf("%f", &prestacao);
    printf("Insira a taxa de juros: ");
    scanf("%f", &taxa_juros);
    printf("Insira o periodo de atraso: ");
    scanf("%f", &periodo_atraso);

    juros = prestacao * taxa_juros * periodo_atraso;

    prestacao_com_juros = prestacao + juros;

    printf("Valor da prestacao vencida: %.2f\n", prestacao);
    printf("Periodo de atraso: %.2f meses\n", periodo_atraso);
    printf("Juros cobrados: %.2f\n", juros);
    printf("Valor total da prestacao (com juros): %.2f\n", prestacao_com_juros);
    return 0;
}

