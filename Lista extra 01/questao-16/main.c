#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &lado3);

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O tri�ngulo � equil�tero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O tri�ngulo � is�sceles.\n");
        } else {
            printf("O tri�ngulo � escaleno.\n");
        }
    } else {
        printf("Os valores informados n�o formam um tri�ngulo.\n");
    }

    return 0;
}
