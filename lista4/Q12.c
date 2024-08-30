#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAMANHO_VETORES 14

void inicializarMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 0;
        }
    }
}

int calcularY(int xi, int r) {
    int yi;

    if (0 < r && r <= 3) {
        yi = xi;
    } else if (3 < r && r <= 5) {
        yi = xi - 1;
    } else if (5 < r && r <= 7) {
        yi = xi + 1;
    } else if (8 < r && r <= 9) {
        yi = xi - 2;
    } else if (9 < r && r <= 10) {
        yi = xi + 2;
    } else {
        yi = xi;
    }

    if (yi < 0) {
        yi = 0;
    } else if (yi >= N) {
        yi = N - 1;
    }

    return yi;
}

int main() {
    int X[TAMANHO_VETORES];
    int Y[TAMANHO_VETORES];
    int M[N][N];

    srand(time(NULL));

    for (int i = 0; i < TAMANHO_VETORES; i++) {
        X[i] = rand() % N;
        int r = rand() % 10 + 1; // r varia de 1 a 10

        Y[i] = calcularY(X[i], r);
    }

    inicializarMatriz(M);

    for (int i = 0; i < TAMANHO_VETORES; i++) {
        M[X[i]][Y[i]]++;
    }

    printf("X = [");
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        printf("%d", X[i]);
        if (i < TAMANHO_VETORES - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Y = [");
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        printf("%d", Y[i]);
        if (i < TAMANHO_VETORES - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Matriz M:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
