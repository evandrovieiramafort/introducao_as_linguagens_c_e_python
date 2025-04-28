#include <stdio.h>

/*Faça um programa em C que leia três números reais e calcule a média aritmética
destes números. Ao final, o programa deve imprimir o resultado do cálculo.*/

int main() {
    float n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero: ");
    scanf("%f", &n2);
    printf("Digite um numero: ");
    scanf("%f", &n3);

    float media = (n1+n2+n3) / 3;

    printf("Media aritmetica: %f", media);
    return 0;
}
