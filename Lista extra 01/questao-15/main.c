#include <stdio.h>

int main() {
    float altura, peso, pesoIdeal;
    char sexo;

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);

    printf("Digite o sexo da pessoa (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido.\n");
        return 1;
    }

    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);

    if (peso < pesoIdeal) {
        printf("A pessoa esta abaixo do peso ideal.\n");
    } else if (peso > pesoIdeal) {
        printf("A pessoa esta acima do peso ideal.\n");
    } else {
        printf("A pessoa esta no peso ideal.\n");
    }

    return 0;
}
