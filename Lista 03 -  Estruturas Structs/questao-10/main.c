#include <stdio.h>

typedef enum {
    JAN = 1,
    FEV,
    MAR,
    ABR,
    MAI,
    JUN,
    JUL,
    AGO,
    SET,
    OUT,
    NOV,
    DEZ
} Mes;

const char* nomeMes(Mes mes) {
    switch(mes) {
        case JAN: return "Janeiro";
        case FEV: return "Fevereiro";
        case MAR: return "Março";
        case ABR: return "Abril";
        case MAI: return "Maio";
        case JUN: return "Junho";
        case JUL: return "Julho";
        case AGO: return "Agosto";
        case SET: return "Setembro";
        case OUT: return "Outubro";
        case NOV: return "Novembro";
        case DEZ: return "Dezembro";
        default: return "Mes invalido";
    }
}

int main() {
    printf("Meses do ano:\n");
    for (Mes mes = JAN; mes <= DEZ; mes++) {
        printf("%d - %s\n", mes, nomeMes(mes));
    }
    return 0;
}
