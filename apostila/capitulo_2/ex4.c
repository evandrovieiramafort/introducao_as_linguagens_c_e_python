#include <stdio.h>

/*4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.*/

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);

    if(n % 5 == 0){
        printf("Eh divisivel por 5");
    } else {
        printf("Nao eh divisivel por 5");
    }

    return 0;
}