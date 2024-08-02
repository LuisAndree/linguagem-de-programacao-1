#include <stdio.h>

int converteParaSegundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}

int main() {
    int horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    int totalSegundos = converteParaSegundos(horas, minutos, segundos);

    printf("Total em segundos: %d\n", totalSegundos);

    return 0;
}
