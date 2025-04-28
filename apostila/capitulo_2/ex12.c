#include <stdio.h>
#include <stdlib.h>

/*12. Faça um programa que leia a idade de uma pessoa e informe:
• Se é maior de idade
• Se é menor de idade
• Se é maior de 65 anos*/

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    if(idade >= 18){
        if (idade >= 65){
            printf("Voce eh maior de idade e tem 65 anos!");
        } else {
            printf("Voce eh maior de idade");
        }    
    } else {
        printf("Voce eh menor de idade");
    }
}