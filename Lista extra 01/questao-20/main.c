#include <stdio.h>

int main() {
    int numAlunos;
    float nota, somaNotas = 0;

    printf("Digite o numero de alunos na sala: ");
    scanf("%d", &numAlunos);

    if (numAlunos <= 0) {
        printf("O numero de alunos deve ser maior que zero.\n");
        return 1;
    }

    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        somaNotas += nota;
    }

    float media = somaNotas / numAlunos;

    printf("A media aritmetica da turma e: %.2f\n", media);

    return 0;
}
