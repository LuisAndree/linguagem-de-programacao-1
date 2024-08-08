#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota (1 a 10): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (1 a 10): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (1 a 10): ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota (1 a 10): ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
