#include <stdio.h>

void mm(int v[], int n, int *min, int *max) {
    *min = v[0];
    *max = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n = sizeof(v) / sizeof(v[0]);
    int min, max;

    mm(v, n, &min, &max);

    printf("Valor mínimo: %d\n", min);
    printf("Valor máximo: %d\n", max);

    return 0;
}

