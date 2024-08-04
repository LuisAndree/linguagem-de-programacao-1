#include <stdio.h>

int main(void) {

    int x, y, *p;
    y = 0;  // y é inicializado com 0
    p = &y; // p recebe o endereço de y
    x = *p; // x recebe o valor apontado por p, que é o valor de y (0)
    x = 4;  // x é atribuído o valor 4
    (*p)++; // o valor apontado por p (que é y) é incrementado em 1, então y se torna 1
    --x;    // x é decrementado em 1, então x se torna 3
    (*p) += x; // o valor apontado por p (que é y) é incrementado pelo valor de x, então y = y + 3, y se torna 4



    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d\n", y);
    printf("Endereco de y: %p\n", (void*)p);

    return 0;
}
