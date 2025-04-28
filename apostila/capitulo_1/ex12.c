#include <stdio.h>

/*Faça um programa em C que leia um número real e calcule o quadrado deste
número. Ao final, o programa deve imprimir o resultado do cálculo*/

int main() {
    int quadrado;
    printf("Digite um numero: ");
    scanf("%i", &quadrado);
    
    printf("Quadrado: %i", quadrado * quadrado);
    return 0;
}