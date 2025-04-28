#include <stdio.h>
#include <stdlib.h>

/*19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores
para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o
mesmo número de pontos, criar um programa em C que informe se uma equipe
foi classificada, de acordo com a seguinte especificação:
• Ler os pontos obtidos por cada jogador da equipe;
• Mostrar esses valores em ordem decrescente;
• Se a soma dos pontos for maior do que 100, imprimir a média aritmética
entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".*/

int main() {
    int p1, p2, p3, temp, soma;
    float media;

    printf("Digite os pontos do primeiro participante: ");
    scanf("%i", &p1);
    printf("Digite os pontos do segundo participante: ");
    scanf("%i", &p2);
    printf("Digite os pontos do terceiro participante: ");
    scanf("%i", &p3);

    if (p1 < p2) {
        temp = p1;
        p1 = p2;
        p2 = temp;
    }
    if (p1 < p3) {
        temp = p1;
        p1 = p3;
        p3 = temp;
    }
    if (p2 < p3) {
        temp = p2;
        p2 = p3;
        p3 = temp;
    }


    printf("\nPontos em ordem decrescente: %d %d %d\n", p1, p2, p3);
    soma = p1 + p2 + p3;

    if (soma > 100) {
        media = soma / 3.0;
        printf("Equipe classificada! Média dos pontos: %.2f\n", media);
    } else {
        printf("Equipe desclassificada.\n");
    }

    return 0;


}