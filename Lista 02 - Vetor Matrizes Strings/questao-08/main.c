#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    double v[n], soma = 0, media, soma_diferencas_quadrado = 0, desvio_padrao;

    printf("Digite %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    for (int i = 0; i < n; i++) {
        soma_diferencas_quadrado += pow(v[i] - media, 2);
    }

    desvio_padrao = sqrt(soma_diferencas_quadrado / n);

    printf("Media: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvio_padrao);

    return 0;
}
