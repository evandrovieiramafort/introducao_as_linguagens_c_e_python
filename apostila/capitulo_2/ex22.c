#include <stdio.h>
#include <stdlib.h>

/*22. Construa um programa que leia o percurso em quilômetros, o tipo do carro e
informe o consumo estimado de combustível, sabendo-se que um carro tipo A
faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.*/

int main() {
    float percursoKm, consumoEstimado;
    char tipoCarro;

    printf("Digite o percurso em quilômetros: ");
    scanf("%f", &percursoKm);

    printf("Digite o tipo do carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);

    if (tipoCarro == 'A' || tipoCarro == 'a') {
        consumoEstimado = percursoKm / 12.0;
    } else if (tipoCarro == 'B' || tipoCarro == 'b') {
        consumoEstimado = percursoKm / 9.0;
    } else if (tipoCarro == 'C' || tipoCarro == 'c') {
        consumoEstimado = percursoKm / 8.0;
    } else {
        printf("Tipo de carro inválido.\n");
        exit(0);
    }

    printf("\nConsumo estimado de combustível: %.2f litros\n", consumoEstimado);

    return 0;
}
