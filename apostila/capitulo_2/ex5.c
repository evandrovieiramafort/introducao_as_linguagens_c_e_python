#include <stdio.h>

/*5. Faça um programa em C que leia um número e informe se ele é divisível por 3 e
por 7.*/

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);

    if(n % 3 == 0 && n % 7 == 0){
        printf("Eh divisivel por 3 e 7");
    } else {
        printf("Nao eh divisivel por 3 e 7");
    }

    return 0;
}