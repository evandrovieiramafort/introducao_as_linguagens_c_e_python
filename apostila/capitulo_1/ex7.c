#include <stdio.h>

/*Faça um programa em C que leia o nome o endereço e o telefone de um cliente e
ao final, imprima esses dados.*/

int main() {
    char nome[100], endereco[100], telefone[20];
    printf("Digite o nome: ");
    fgets(nome, 100, stdin);
    printf("Digite o endereco: ");
    fgets(endereco, 100, stdin);
    printf("Digite o telefone: ");
    fgets(telefone, 20, stdin);

    printf("\nDados do cliente:\nNome: %sEndereco: %sTelefone: %s", nome, endereco, telefone);
    return 0;
}
