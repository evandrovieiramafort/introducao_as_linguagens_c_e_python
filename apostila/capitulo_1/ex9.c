#include <stdio.h>

/*9. Faça um programa em C que leia um número real e imprima ¼ deste número.*/

int main() {
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);

    printf("Resultado: %f", n/4);
    return 0;
}
