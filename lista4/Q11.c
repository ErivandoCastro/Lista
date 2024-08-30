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

int main() {
    int X[TAMANHO_VETORES];
    int Y[TAMANHO_VETORES];
    int M[N][N];

    srand(time(NULL));
    
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }

    inicializarMatriz(M);

    for (int i = 0; i < TAMANHO_VETORES; i++) {
        M[X[i]][Y[i]]++;
    }

    printf("X = [");
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        printf("%d", X[i]);
    }
    printf("]\n");

    printf("Y = [");
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        printf("%d", Y[i]);
    }
    printf("]\n");

    printf("M =\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
