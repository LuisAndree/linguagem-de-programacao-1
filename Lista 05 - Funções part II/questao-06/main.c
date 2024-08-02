#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int i, j;

    printf("Digite a base (i): ");
    scanf("%d", &i);
    printf("Digite o expoente (j): ");
    scanf("%d", &j);

    int resultado = potencia(i, j);
    printf("%d elevado a %d e igual a %d\n", i, j, resultado);

    return 0;
}
