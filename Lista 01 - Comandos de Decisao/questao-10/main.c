#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc >= 18.6 && imc < 24.9) {
        printf("Classificacao: Saudavel\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Classificacao: Peso em exesso\n");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Classificacao: Obesidade Grau I\n");
    } else if (imc >= 35 && imc < 39.9) {
        printf("Classificacao: Obesidade Grau II (severa)\n");
    } else {
        printf("Classificacao: Obesidade Grau III (morbida)\n");
    }

    return 0;
}
