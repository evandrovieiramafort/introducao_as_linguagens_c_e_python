#include <stdio.h>

/*Faça um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se 
que o carro tem autonomia de 12 km por litro de combustível. O programa deverá ler o tempo decorrido na viagem e a
velocidade média e aplicar as fórmulas:

D = T × V
L = D / 12

Em que:
• D = Distância percorrida em horas
• T = Tempo decorrido
• V = Velocidade média
• L = Litros de combustível consumidos

Ao final, o programa deverá imprimir a distância percorrida e a quantidade de
litros consumidos na viagem.*/

#include <stdio.h>

int main() {
    float consumo, distancia, tempo, velocidade;

    printf("Insira o tempo da viagem (em min): ");
    scanf("%f", &tempo);
    printf("Insira a velocidade media da viagem (em Km/h): ");
    scanf("%f", &velocidade);

    tempo = tempo / 60;
    distancia = tempo * velocidade;
    consumo = distancia / 12;

    // Imprime os resultados
    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Consumo de combustivel: %.2f litros\n", consumo);

    return 0;
}
