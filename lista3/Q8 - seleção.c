#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 100

int main() {
    int vetor[tamanho];
    int min, max;

    printf("Digite o valor minimo do intervalo: ");
    scanf("%d", &min);
    printf("Digite o valor maximo do intervalo: ");
    scanf("%d", &max);

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % (max - min + 1) + min;
    }

    printf("\nVetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indiceMenor]) {
                indiceMenor = j;
            }
        }
        if (indiceMenor != i) {
            int temp = vetor[i];
            vetor[i] = vetor[indiceMenor];
            vetor[indiceMenor] = temp;
        }
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
