#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar
dos motoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro
deve ser renovado é determinado pelo último número da placa do mesmo, faça
um programa que, a partir da leitura da placa do carro, informe o mês em que o
emplacamento deve ser renovado.*/

int main() {
    char placa[8];
    char ultimoDigito;

    printf("Digite a placa do carro (no formato XXX1234 ou XXX-1234): ");
    scanf("%s", placa);

    ultimoDigito = placa[strlen(placa) - 1];

    switch(ultimoDigito) {
        case '1':
            printf("\nMês de renovação: Janeiro\n");
            break;
        case '2':
            printf("\nMês de renovação: Fevereiro\n");
            break;
        case '3':
            printf("\nMês de renovação: Março\n");
            break;
        case '4':
            printf("\nMês de renovação: Abril\n");
            break;
        case '5':
            printf("\nMês de renovação: Maio\n");
            break;
        case '6':
            printf("\nMês de renovação: Junho\n");
            break;
        case '7':
            printf("\nMês de renovação: Julho\n");
            break;
        case '8':
            printf("\nMês de renovação: Agosto\n");
            break;
        case '9':
            printf("\nMês de renovação: Setembro\n");
            break;
        case '0':
            printf("\nMês de renovação: Outubro\n");
            break;
        default:
            printf("\nÚltimo dígito inválido!\n");
            break;
    }

    return 0;
}
