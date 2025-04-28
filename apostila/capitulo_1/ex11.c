#include <stdio.h>

/*Faça um programa em C que leia dois números reais e calcule as quatro operações
básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao
final, o programa deve imprimir os resultados dos cálculos.*/

int main() {
    float n1, n2;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero: ");
    scanf("%f", &n2);

    float soma = n1 + n2;
    float subtracao = n1 - n2;
    float multiplicacao = n1 * n2;
    float divisao = n1 / n2;
    
    printf("Soma: %f\nSubtracao: %f\nMultiplicacao: %f\nDivisao: %f\n", soma, subtracao, multiplicacao, divisao);

    return 0;
}
