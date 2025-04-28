#include <stdio.h>

/*Faça um programa em C que leia dois números reais e os imprima.*/

int main() {
    float num1, num2;
    printf("Digite dois números reais: ");
    scanf("%f %f", &num1, &num2);
    printf("Números digitados: %.2f e %.2f\n", num1, num2);
    return 0;
}
