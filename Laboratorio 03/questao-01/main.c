#include <stdio.h>

int main() {
    int n, i;

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);

    int numeros[n];
    printf("Digite %d numeros:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Sequencia ao contrario:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
