#include <stdio.h>
#include <stdlib.h>

/*15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
Faça um programa em C que leia o valor do produto e imprima o valor da venda.*/

int main() {
    float valorProduto, valorVenda;

    printf("Digite o valor de compra do produto: ");
    scanf("%f", &valorProduto);

    if(valorProduto < 20.0){
        valorVenda = valorProduto * 1.45;
    } else {
        valorVenda = valorProduto * 1.3;
    }

    printf("Valor da venda: R$ %.2f\n", valorVenda);

    return 0;
}