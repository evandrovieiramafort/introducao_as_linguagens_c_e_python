#include <stdio.h>

/*6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido.*/

int main(){
    float salarioBruto, limite, parcela;
    printf("Salario: ");
    scanf("%f", &salarioBruto);
    printf("Valor da parcela: ");
    scanf("%f", &parcela);

    limite = salarioBruto * 0.3;

    if(parcela < limite){
        printf("Emprestimo concedido");
    } else {
        printf("Emprestimo nao concedido");
    }

    return 0;
}