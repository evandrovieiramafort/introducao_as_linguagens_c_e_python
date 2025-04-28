#include <stdio.h>
#include <stdlib.h>

/*13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final).*/

int main() {
    char nome[50];
    float n1, n2, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;
    
    printf("\nNome: %s\n", nome);
    printf("Primeira nota: %f\n", n1);
    printf("Segunda nota: %f\n", n2);

    if (media < 7){
        if (media > 3){
            printf("Prova final!");
        } else {
            printf("Reprovado");
        }
    } else {
        printf("Aprovado!");
    }

    return 0;
}