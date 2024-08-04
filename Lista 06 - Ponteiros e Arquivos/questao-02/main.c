#include <stdio.h>

void troca(int *i, int *j) {
    int temp; // temp deve ser uma variável inteira, não um ponteiro
    temp = *i;
    *i = *j;
    *j = temp;
}
int main() {
    printf("A: \n");
    int x, *p;
    x = 100;
    p = &x; // Corrigido para apontar para o endereço de x
    printf("Valor de p: %d.\n", *p); // Corrigidas as aspas

    printf("B: \n");
    int a = 5, b = 10;
    printf("Antes da troca: a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("Depois da troca: a = %d, b = %d\n", a, b);
    return 0;
}
