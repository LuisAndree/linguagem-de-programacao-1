#include <stdio.h>
#include <string.h>

#define NUM_CARROS 5
#define TAM_NOME 20

int main() {
    char modelos[NUM_CARROS][TAM_NOME];
    float consumos[NUM_CARROS];
    int i, indiceEconomico = 0;
    float consumo, menorConsumo;

    for (i = 0; i < NUM_CARROS; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        fgets(modelos[i], TAM_NOME, stdin);
        modelos[i][strcspn(modelos[i], "\n")] = 0;
    }

    for (i = 0; i < NUM_CARROS; i++) {
        printf("Digite o consumo do carro %s (km por litro): ", modelos[i]);
        scanf("%f", &consumos[i]);
    }

    menorConsumo = consumos[0];
    for (i = 1; i < NUM_CARROS; i++) {
        if (consumos[i] > menorConsumo) {
            menorConsumo = consumos[i];
            indiceEconomico = i;
        }
    }

    printf("\nO carro mais economico e o %s.\n", modelos[indiceEconomico]);

    for (i = 0; i < NUM_CARROS; i++) {
        consumo = 1000.0 / consumos[i];
        printf("O carro %s consome %.2f litros para percorrer 1.000 km.\n", modelos[i], consumo);
    }

    return 0;
}
