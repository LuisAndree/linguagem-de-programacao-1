#include <stdio.h>

int main() {
    char c = 'A';
    int i = 10;
    double d = 20.5;

    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    printf("Conteudo das variaveis apontadas:\n");
    printf("char: %c\n", *pc);
    printf("int: %d\n", *pi);
    printf("double: %.2f\n", *pd);

    printf("\nEndereco das variaveis apontadas:\n");
    printf("char: %p\n", (void*)pc);
    printf("int: %p\n", (void*)pi);
    printf("double: %p\n", (void*)pd);

    printf("\nEndereco de cada ponteiro:\n");
    printf("char pointer: %p\n", (void*)&pc);
    printf("int pointer: %p\n", (void*)&pi);
    printf("double pointer: %p\n", (void*)&pd);

    return 0;
}
