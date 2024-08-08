#include <stdio.h>

int main() {
    int anoFabricacao;
    float precoCarro, imposto, taxa;

    printf("Digite o ano de fabricacao do carro: ");
    scanf("%d", &anoFabricacao);

    printf("Digite o preco de tabela do carro: R$ ");
    scanf("%f", &precoCarro);

    if (anoFabricacao < 1990) {
        taxa = 1.0;
    } else {
        taxa = 1.5;
    }

    imposto = (taxa / 100) * precoCarro;

    printf("O imposto a ser pago e: R$ %.2f\n", imposto);

    return 0;
}
