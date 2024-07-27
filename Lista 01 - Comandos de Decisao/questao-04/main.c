#include <stdio.h>
#include <stdbool.h>

bool nota_valida(double nota) {
    return nota >= 0.0 && nota <= 10.0;
}

int main() {
    double nota1, nota2, nota3;
    double media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    if (!nota_valida(nota1)) {
        printf("Nota invalida! A nota deve estar entre 0.0 e 10.0.\n");
        return 1;
    }

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    if (!nota_valida(nota2)) {
        printf("Nota invalida! A nota deve estar entre 0.0 e 10.0.\n");
        return 1;
    }

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    if (!nota_valida(nota3)) {
        printf("Nota invalida! A nota deve estar entre 0.0 e 10.0.\n");
        return 1;
    }

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("A media das notas e: %.2lf\n", media);

    return 0;
}
