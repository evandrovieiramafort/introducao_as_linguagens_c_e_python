#include <stdio.h>
#include <stdlib.h>

/*23. Crie um programa que informe a quantidade total de calorias de uma refeição a
partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida
conforme a tabela a seguir.
Prato                Sobremesa               Bebida
Vegetariano 180cal   Abacaxi 75cal           Chá 20cal
Peixe 230cal         Sorvete diet 110cal     Suco de laranja 70cal
Frango 250cal        Mousse diet 170cal      Suco de melão 100cal
Carne 350cal         Mousse chocolate 200cal Refrigerante diet 65cal*/

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
