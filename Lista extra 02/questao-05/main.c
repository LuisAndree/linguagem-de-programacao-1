#include <stdio.h>

int dobro(int numero) {
    return 2 * numero;
}

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("O dobro do valor e: %d\n", dobro(valor));

    return 0;
}
