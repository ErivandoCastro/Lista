#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populateVetor(int *vetor, int size, int N);
void exibirMatriz(int *matriz, int N);
void populateMatrizCoocorrencia(int *matriz, int *X, int *Y, int size, int N);

int main(){
    int N, size;

    printf("Digite o valor de N (tamanho dos vetores e da matriz): ");
    scanf("%d", &N);

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &size);

    int *X = (int *)malloc(size * sizeof(int));
    int *Y = (int *)malloc(size * sizeof(int));
    int *M = (int *)calloc(N * N, sizeof(int));

    if (X == NULL || Y == NULL || M == NULL){
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    srand(time(NULL));
    populateVetor(X, size, N);
    populateVetor(Y, size, N);

    populateMatrizCoocorrencia(M, X, Y, size, N);

    printf("Matriz de Coocorrencias:\n");
    exibirMatriz(M, N);

    free(X);
    free(Y);
    free(M);

    return 0;
}

void populateVetor(int *vetor, int size, int N){
    for(int i = 0; i < size; i++){
        *(vetor + i) = rand() % N;
    }
}

void populateMatrizCoocorrencia(int *matriz, int *X, int *Y, int size, int N){
    for(int i = 0; i < size; i++){
       (*(matriz + (*(X + i) * N + *(Y + i))))++;
    }
}

void exibirMatriz(int *matriz, int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d\t", *(matriz + (i * N + j)));
        }
        printf("\n");
    }
}
