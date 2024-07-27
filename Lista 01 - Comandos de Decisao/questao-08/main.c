#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km, litros;
    int razaoKmPorLitros;

    printf("Digite a quantidade de Km rodados: ");
    scanf("%d", &km);

    printf("Digite a quantidade de litros consumidos no percurso: ");
    scanf("%d", &litros);

    razaoKmPorLitros = km / litros;

    if (razaoKmPorLitros < 8) {
        printf("Seu carro fez %d Km/L \n", razaoKmPorLitros);
        printf("Venda o carro!!");
    } else if(razaoKmPorLitros >= 8 && razaoKmPorLitros <= 14){
        printf("Seu carro fez %d Km/L \n", razaoKmPorLitros);
       if (razaoKmPorLitros > 12 ) {
        printf("Super Economico!!");
       } else {
        printf("Economico!!!");
       }
    }

    return 0;
}
