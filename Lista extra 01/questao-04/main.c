#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    char sexo;

    printf("Digite a primeira nota (1 a 10): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (1 a 10): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (1 a 10): ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota (1 a 10): ");
    scanf("%f", &nota4);

    printf("Digite o sexo do aluno (M ou F): ");
    scanf(" %c", &sexo);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (sexo == 'M' || sexo == 'm') {
        printf("Caro aluno, seu resultado e: ");
    } else if (sexo == 'F' || sexo == 'f') {
        printf("Cara aluna, seu resultado e: ");
    }

    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
