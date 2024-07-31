#include <stdio.h>
#include <stdlib.h>

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data data;
    struct Horario horario;
    char descricao[100];
};

int main() {
    struct Compromisso compromisso;

    printf("Digite a data do compromisso (dia mes ano): ");
    scanf("%d %d %d", &compromisso.data.dia, &compromisso.data.mes, &compromisso.data.ano);

    printf("Digite o horario do compromisso (hora minutos segundos): ");
    scanf("%d %d %d", &compromisso.horario.hora, &compromisso.horario.minutos, &compromisso.horario.segundos);

    getchar();

    printf("Digite a descricao do compromisso: ");
    fgets(compromisso.descricao, 100, stdin);

    printf("\nDados do Compromisso:\n");
    printf("Data: %02d/%02d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
    printf("Descricao: %s", compromisso.descricao);

    return 0;
}
