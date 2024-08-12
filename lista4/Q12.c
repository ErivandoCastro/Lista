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

// Função para calcular o valor de yi baseado em xi e r
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
        yi = xi; // Caso r não se encaixe em nenhuma faixa, yi é igual a xi
    }

    // Limitar yi ao intervalo [0, N-1]
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

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Preencher os vetores X e Y com números aleatórios no intervalo [0, N-1]
    for (int i = 0; i < TAMANHO_VETORES; i++) {
        X[i] = rand() % N;
        int r = rand() % 10 + 1; // r varia de 1 a 10

        // Calcular Y[i] baseado nas condições especificadas
        Y[i] = calcularY(X[i], r);
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

    // Exibir a matriz M
    printf("Matriz M:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
