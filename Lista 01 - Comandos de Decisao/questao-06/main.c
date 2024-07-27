#include <stdio.h>

int main() {
    double salario, prestacao;
    double percentual;

    printf("Digite o salario do trabalhador: ");
    scanf("%lf", &salario);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%lf", &prestacao);

    percentual = salario * 0.20;

    if (prestacao > percentual) {
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }

    return 0;
}
