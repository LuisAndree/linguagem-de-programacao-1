#include <stdio.h>

#define NUM_QUESTOES 10
#define NUM_ALUNOS 3
#define MEDIA_APROVACAO 7.0

int main() {
    char gabarito[NUM_QUESTOES];
    char respostas[NUM_QUESTOES];
    int matriculas[NUM_ALUNOS];
    int notas[NUM_ALUNOS];
    int i, j;
    int aprovados = 0;

    printf("Digite o gabarito da prova (10 caracteres de a a e):\n");
    for (i = 0; i < NUM_QUESTOES; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (i = 0; i < NUM_ALUNOS; i++) {
        int nota = 0;

        printf("\nDigite a matricula do aluno %d: ", i + 1);
        scanf("%d", &matriculas[i]);

        printf("Digite as respostas do aluno %d (10 caracteres de a a e):\n", i + 1);
        for (j = 0; j < NUM_QUESTOES; j++) {
            scanf(" %c", &respostas[j]);
            if (respostas[j] == gabarito[j]) {
                nota++;
            }
        }

        notas[i] = nota;

        if (nota >= MEDIA_APROVACAO) {
            aprovados++;
        }

        printf("\nMatricula: %d\n", matriculas[i]);
        printf("Respostas: ");
        for (j = 0; j < NUM_QUESTOES; j++) {
            printf("%c ", respostas[j]);
        }
        printf("\nNota: %d\n", nota);
    }

    float percentual_aprovacao = (float)aprovados / NUM_ALUNOS * 100;
    printf("\nPercentual de aprovacao: %.2f%%\n", percentual_aprovacao);

    return 0;
}

