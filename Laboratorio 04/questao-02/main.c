#include <stdio.h>

int main() {
    float vetor[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *p = vetor;

    printf("Enderecos dos elementos do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("&vetor[%d] = %p\n", i, (void*)&vetor[i]);
    }

    printf("\nEnderecos dos elementos do vetor usando ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        printf("p + %d = %p\n", i, (void*)(p + i));
    }

    return 0;
}
