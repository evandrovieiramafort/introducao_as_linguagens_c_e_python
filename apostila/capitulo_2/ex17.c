#include <stdio.h>
#include <stdlib.h>

/*17. Depois da liberação do governo para as mensalidades dos planos de saúde, as
pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito
caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um
programa que entre com o nome e a idade de uma pessoa e imprima o nome e o
valor que ela deverá pagar.

Idade                   Valor
Até 10 anos             R$30,00
Acima de 10 até 29 anos R$60,00
Acima de 29 até 45 anos R$120,00
Acima de 45 até 59 anos R$150,00
Acima de 59 até 65 anos R$250,00
Maior que 65 anos       R$400,00*/

int main() {
    int idade;
    char nome[50];

    printf("Digite o nome do proponente: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite a idade do proponente: ");
    scanf("%i", &idade);

    if (idade <= 10) {
        printf("Nome: %s\nR$30\n");
    } else if (idade > 10 && idade <= 29) {
        printf("Nome: %s\nR$60\n");
    } else if (idade > 29 && idade <= 45) {
        printf("Nome: %s\nR$120\n");
    } else if (idade > 45 && idade <= 59) {
        printf("Nome: %s\nR$150\n");
    } else if (idade > 59 && idade <= 65) {
        printf("Nome: %s\nR$250\n");
    } else if (idade > 65) {
        printf("Nome: %s\nR$400\n");
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}