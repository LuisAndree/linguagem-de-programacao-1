#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};

    // Acessando o valor do elemento no �ndice 3
    printf("v[3] = %d\n", v[3]);

    // Calculando o endere�o do elemento no �ndice 3
    printf("v + 3 = %p\n", (void*)(v + 3));

    // Acessando o valor usando aritm�tica de ponteiros
    printf("*(v + 3) = %d\n", *(v + 3));

    return 0;
}

