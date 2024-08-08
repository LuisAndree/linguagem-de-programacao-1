#include <stdio.h>

int main() {
    int anoAtual = 2024;
    int anoContratacao = 1995;
    float salarioInicial, salarioAtual, aumentoPercentual, aumentoPercentualAnoAnterior;

    printf("Digite o salario inicial do funcionario: R$ ");
    scanf("%f", &salarioInicial);

    salarioAtual = salarioInicial;
    aumentoPercentualAnoAnterior = 1.5;

    for (int ano = 1996; ano <= anoAtual; ano++) {
        if (ano == 1996) {
            salarioAtual += salarioAtual * (aumentoPercentualAnoAnterior / 100);
        } else {
            aumentoPercentual = aumentoPercentualAnoAnterior * 2;
            salarioAtual += salarioAtual * (aumentoPercentual / 100);
            aumentoPercentualAnoAnterior = aumentoPercentual;
        }
    }

    printf("O salario atual do funcionario e: R$ %.2f\n", salarioAtual);

    return 0;
}
