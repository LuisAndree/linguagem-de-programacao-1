#include <stdio.h>

struct ponto {
    int x;
    int y;
};

struct retangulo {
    struct ponto p1;
    struct ponto p2;
    struct ponto p3;
    struct ponto p4;
};

int main() {
    printf("Tamanho de char: %zu bytes\n", sizeof(char));
    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de float: %zu bytes\n", sizeof(float));

    printf("Tamanho de struct ponto: %zu bytes\n", sizeof(struct ponto));

    printf("Tamanho de struct retangulo: %zu bytes\n", sizeof(struct retangulo));

    return 0;
}

