#include <stdio.h>
#include <stdbool.h>

bool is_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

bool dia_valido(int dia, int mes, int ano) {
    int dias_no_mes;

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias_no_mes = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias_no_mes = 30;
            break;
        case 2:
            if (is_bissexto(ano)) {
                dias_no_mes = 29;
            } else {
                dias_no_mes = 28;
            }
            break;
        default:
            return false;
    }

    return dia > 0 && dia <= dias_no_mes;
}

int main() {
    int dia, mes, ano;

    printf("Digite o dia (1-31): ");
    scanf("%d", &dia);

    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12 || !dia_valido(dia, mes, ano)) {
        printf("Data invalida.\n");
    } else {
        printf("Data valida.\n");
    }

    return 0;
}
