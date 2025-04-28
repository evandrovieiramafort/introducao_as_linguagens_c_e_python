#include <stdio.h>
#include <stdlib.h>

/*9. Faça um programa em C que permita entrar com o ano de nascimento da pessoa
e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça
de verificar se o ano de nascimento informado é válido.*/

int main() {
    const int ANO_ATUAL = 2025;

    int anoNascimento, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    if (anoNascimento > ANO_ATUAL) {
        printf("Entrada invalida!\n");
        exit(0);
    }

    idade = ANO_ATUAL - anoNascimento;

    printf("Idade da pessoa: %d\n", idade);

    return 0;
}