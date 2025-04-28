#include <stdio.h>

/*Faça um programa em C que calcule a conversão entre graus centígrados e Fah-
renheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a
seguir. Após calcular o programa deve imprimir o resultado da conversão.

F = (9 × C + 160) / 5
Em que:
• F = Graus em Fahrenheit
• C = Graus centígrados*/

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;
    
    printf("Digite a temperatura (em C): ");
    scanf("%f", &temperaturaCelsius);
    
    temperaturaFahrenheit = (9 * temperaturaCelsius + 160) / 5;
    
    printf("Temperatura em Fahrenheit: %.2f", temperaturaFahrenheit);
    return 0;
}