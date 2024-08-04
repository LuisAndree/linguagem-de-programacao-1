#include <stdio.h>

int main() {
    int v[10]; // Declaração do vetor com 10 elementos
    int *p = v; // Ponteiro para o primeiro elemento do vetor

    printf("Endereco de v[0]: %p\n", (void*)&v[0]);
    printf("Endereco de v[3]: %p\n", (void*)&v[3]);
    printf("Valor de p: %p\n", (void*)p);
    printf("Valor de p + 3: %p\n", (void*)(p + 3));

    return 0;
}
