#include <stdio.h>

int verificaNumero(int num) {
    if (num > 0) {
        return 1;
    } else if (num < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int resultado = verificaNumero(numero);

    printf("Resultado: %d\n", resultado);

    return 0;
}
