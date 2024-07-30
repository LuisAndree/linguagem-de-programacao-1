#include <stdio.h>

#define LINHAS 5
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int i;
    int matricula_maior_nota;
    int maior_nota = -1;
    int soma_notas_finais = 0;
    float media_notas_finais;

    printf("Digite as informacoes dos alunos (matricula, media_provas, media_trabalhos):\n");
    for (i = 0; i < LINHAS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &matriz[i][0]);
        printf("Media das provas: ");
        scanf("%d", &matriz[i][1]);
        printf("Media dos trabalhos: ");
        scanf("%d", &matriz[i][2]);

        matriz[i][3] = matriz[i][1] + matriz[i][2];

        if (matriz[i][3] > maior_nota) {
            maior_nota = matriz[i][3];
            matricula_maior_nota = matriz[i][0];
        }

        soma_notas_finais += matriz[i][3];
    }

    media_notas_finais = (float)soma_notas_finais / LINHAS;

    printf("\nMatricula do aluno com a maior nota final: %d\n", matricula_maior_nota);

    printf("Media aritmetica das notas finais: %.2f\n", media_notas_finais);

    return 0;
}

