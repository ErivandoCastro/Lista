#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho_F 100

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int tamanhoX;
    printf("Digite o tamanho do vetor X: ");
    scanf("%d", &tamanhoX);

    int X[tamanhoX];
    int F[tamanho_F];

    int *px = X;
    int *pf = F;

    for (int i = 0; i < N; i++) {
        *(pf + i) = 0;
    }

    srand(time(NULL));

    printf("Vetor X:\n");
    for (int i = 0; i < tamanhoX; i++) {
        *(px + i) = rand() % N;
        printf("%d ", *(px + i));
    }
    printf("\n");

    for (int i = 0; i < tamanhoX; i++) {
        (*(pf + *(px + i)))++; 
    }

    printf("Vetor F:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pf + i));
    }
    printf("\n");

    return 0;
}
