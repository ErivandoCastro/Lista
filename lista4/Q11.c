#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAMANHO_VETORES 14

// Função para inicializar a matriz com zeros
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

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Preencher os vetores X e Y com números aleatórios no intervalo [0, N-1]
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }

    // Inicializar a matriz M com zeros
    inicializarMatriz(M);

    // Preencher a matriz M com as coocorrências dos elementos de X e Y
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        M[X[i]][Y[i]]++;
    }

    // Exibir os vetores X e Y
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

    // Exibir a matriz M
    printf("M =\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
