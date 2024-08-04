#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};

    // Acessando o valor do elemento no índice 3
    printf("v[3] = %d\n", v[3]);

    // Calculando o endereço do elemento no índice 3
    printf("v + 3 = %p\n", (void*)(v + 3));

    // Acessando o valor usando aritmética de ponteiros
    printf("*(v + 3) = %d\n", *(v + 3));

    return 0;
}

