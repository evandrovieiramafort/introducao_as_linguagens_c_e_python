#include <stdio.h>
#include <stdlib.h>

/*25. A prefeitura contratou uma firma especializada para manter os níveis de poluição
considerados ideais para um país do 1º mundo. As indústrias foram classificadas em três grupos.
Sabendo que o índice aceitável é até 0,25, fazer um programa que imprima intimações de acordo
com o índice:
Índice   Indústrias que receberão intimação
0,3      1º grupo
0,4      1º e 2º grupos
0,5      1º, 2º e 3º grupos
*/

int main() {
    float indice;

    printf("Digite o índice de poluição: ");
    scanf("%f", &indice);

    if (indice <= 0.25) {
        printf("\nÍndice dentro do limite permitido.\n");
    } else if (indice >= 0.3 && indice < 0.4) {
        printf("\nIntimação: Indústrias do 1º grupo devem suspender as atividades.\n");
    } else if (indice >= 0.4 && indice < 0.5) {
        printf("\nIntimação: Indústrias do 1º e 2º grupos devem suspender as atividades.\n");
    } else if (indice >= 0.5) {
        printf("\nIntimação: Indústrias do 1º, 2º e 3º grupos devem suspender as atividades.\n");
    } else {
        printf("\nÍndice inválido para emissão de intimação.\n");
    }

    return 0;
}
