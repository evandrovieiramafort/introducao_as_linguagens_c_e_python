#include <stdio.h>

/*3. Faça um programa que leia um número e imprima uma das duas mensagens: "É
múltiplo de 3"ou "Não é múltiplo de 3"*/

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);

    if(n % 3 == 0){
        printf("Eh multiplo de 3");
    } else {
        printf("Nao eh multiplo de 3");
    }

    return 0;
}