#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

void lerDados(Aluno *alunos, int tamanho);
Aluno maiorNotaProva1(Aluno *alunos, int tamanho);
Aluno maiorMedia(Aluno *alunos, int tamanho);
Aluno menorMedia(Aluno *alunos, int tamanho);
void verificarAprovacao(Aluno *alunos, int tamanho);

int main() {
    Aluno alunos[5];

    lerDados(alunos, 5);

    Aluno alunoMaiorNota1 = maiorNotaProva1(alunos, 5);
    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Matricula: %d, Nome: %s, Nota1: %.2f\n", alunoMaiorNota1.matricula, alunoMaiorNota1.nome, alunoMaiorNota1.nota1);

    Aluno alunoMaiorMedia = maiorMedia(alunos, 5);
    printf("\nAluno com maior media geral:\n");
    printf("Matricula: %d, Nome: %s, Media: %.2f\n", alunoMaiorMedia.matricula, alunoMaiorMedia.nome,
           (alunoMaiorMedia.nota1 + alunoMaiorMedia.nota2 + alunoMaiorMedia.nota3) / 3);

    Aluno alunoMenorMedia = menorMedia(alunos, 5);
    printf("\nAluno com menor media geral:\n");
    printf("Matricula: %d, Nome: %s, Media: %.2f\n", alunoMenorMedia.matricula, alunoMenorMedia.nome,
           (alunoMenorMedia.nota1 + alunoMenorMedia.nota2 + alunoMenorMedia.nota3) / 3);

    verificarAprovacao(alunos, 5);

    return 0;
}

void lerDados(Aluno *alunos, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
    }
}

Aluno maiorNotaProva1(Aluno *alunos, int tamanho) {
    Aluno maior = alunos[0];
    for (int i = 1; i < tamanho; i++) {
        if (alunos[i].nota1 > maior.nota1) {
            maior = alunos[i];
        }
    }
    return maior;
}

Aluno maiorMedia(Aluno *alunos, int tamanho) {
    Aluno maior = alunos[0];
    float mediaMaior = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    for (int i = 1; i < tamanho; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media > mediaMaior) {
            maior = alunos[i];
            mediaMaior = media;
        }
    }
    return maior;
}

Aluno menorMedia(Aluno *alunos, int tamanho) {
    Aluno menor = alunos[0];
    float mediaMenor = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    for (int i = 1; i < tamanho; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media < mediaMenor) {
            menor = alunos[i];
            mediaMenor = media;
        }
    }
    return menor;
}

void verificarAprovacao(Aluno *alunos, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media >= 6) {
            printf("\nAluno %s (Matricula: %d) foi APROVADO com media %.2f\n", alunos[i].nome, alunos[i].matricula, media);
        } else {
            printf("\nAluno %s (Matricula: %d) foi REPROVADO com media %.2f\n", alunos[i].nome, alunos[i].matricula, media);
        }
    }
}
