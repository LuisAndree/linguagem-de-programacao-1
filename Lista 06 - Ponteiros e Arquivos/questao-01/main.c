#include <stdio.h>

int main(void) {

    int x, y, *p;
    y = 0;  // y � inicializado com 0
    p = &y; // p recebe o endere�o de y
    x = *p; // x recebe o valor apontado por p, que � o valor de y (0)
    x = 4;  // x � atribu�do o valor 4
    (*p)++; // o valor apontado por p (que � y) � incrementado em 1, ent�o y se torna 1
    --x;    // x � decrementado em 1, ent�o x se torna 3
    (*p) += x; // o valor apontado por p (que � y) � incrementado pelo valor de x, ent�o y = y + 3, y se torna 4



    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d\n", y);
    printf("Endereco de y: %p\n", (void*)p);

    return 0;
}
