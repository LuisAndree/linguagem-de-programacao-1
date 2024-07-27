#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    double quadrado, raiz;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero > 0) {
        quadrado = numero * numero;
        raiz = sqrt(numero);

        printf("O numero digitado ao quadrado e: %.2lf\n", quadrado);
        printf("A raiz quadrada do numero digitado e: %.2lf\n", raiz);
    } else {
        printf("O numero digitado nao e positivo.\n");
    }

    return 0;
}
