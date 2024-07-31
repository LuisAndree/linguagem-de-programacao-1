#include <stdio.h>
#include <math.h>

struct ponto {
    int x;
    int y;
};

struct retangulo {
    struct ponto p1;
    struct ponto p2;
    struct ponto p3;
    struct ponto p4;
} ret1;

float distanciaQuadrada(struct ponto a, struct ponto b) {
    return (float)((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int ehRetangulo(struct retangulo r) {
    float d2 = distanciaQuadrada(r.p1, r.p2);
    float d3 = distanciaQuadrada(r.p1, r.p3);
    float d4 = distanciaQuadrada(r.p1, r.p4);

    if (d2 == 0 || d3 == 0 || d4 == 0) {
        return 0;
    }

    if (d2 == d3 && 2 * d2 == d4 && 2 * distanciaQuadrada(r.p2, r.p4) == distanciaQuadrada(r.p2, r.p3)) {
        return 1;
    }

    if (d3 == d4 && 2 * d3 == d2 && 2 * distanciaQuadrada(r.p3, r.p2) == distanciaQuadrada(r.p3, r.p4)) {
        return 1;
    }

    if (d2 == d4 && 2 * d2 == d3 && 2 * distanciaQuadrada(r.p2, r.p3) == distanciaQuadrada(r.p2, r.p4)) {
        return 1;
    }

    return 0;
}

int main() {
    printf("Digite as coordenadas dos quatro pontos do retângulo:\n");

    printf("Ponto 1 (x y): ");
    scanf("%d %d", &ret1.p1.x, &ret1.p1.y);

    printf("Ponto 2 (x y): ");
    scanf("%d %d", &ret1.p2.x, &ret1.p2.y);

    printf("Ponto 3 (x y): ");
    scanf("%d %d", &ret1.p3.x, &ret1.p3.y);

    printf("Ponto 4 (x y): ");
    scanf("%d %d", &ret1.p4.x, &ret1.p4.y);

    if (ehRetangulo(ret1)) {
        printf("Os pontos formam um retângulo.\n");
    } else {
        printf("Os pontos não formam um retângulo.\n");
    }

    return 0;
}
