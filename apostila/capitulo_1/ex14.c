#include <stdio.h>

/*Faça um programa em C que leia a base e a altura de um retângulo e imprima o
perímetro (base + altura) e a área (base * altura).*/

int main() {
    float base, altura;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    float perimetro = base + altura;
    float area = base * altura;
    
    printf("Perimetro: %.2f\nArea: %.2f", perimetro, area);
    return 0;
}