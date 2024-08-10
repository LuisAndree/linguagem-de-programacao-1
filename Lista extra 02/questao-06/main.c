#include <stdio.h>

int verificarNumero(int numero) {
    if (numero > 0) {
        return 1;
    } else if (numero < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    int resultado = verificarNumero(valor);

    if (resultado == 1) {
        printf("O numero e positivo.\n");
    } else if (resultado == -1) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }

    return 0;
}
