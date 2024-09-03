#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 50

int *alocarMemoria(int *p, int tamanho);
void populateVetor(int *ponteiro, int tamanho);
void exibirVetor(int *ponteiro, int tamanho);
float calcularEMQ(int *vetorA, int *vetorB, int tamanho);

int main() {
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int *ponteirox = alocarMemoria(NULL, tamanho);
    int *ponteiroy = alocarMemoria(NULL, tamanho);

    srand(time(NULL));
    populateVetor(ponteirox, tamanho);
    populateVetor(ponteiroy, tamanho);
     
    printf("Vetor X:\n");
    exibirVetor(ponteirox, tamanho);
    
    printf("Vetor Y:\n");
    exibirVetor(ponteiroy, tamanho);

    float emq = calcularEMQ(ponteirox, ponteiroy, tamanho);
    printf("Erro Medio Quadratico (EMQ) entre os vetores: %f\n", emq);

    free(ponteirox);
    free(ponteiroy);

    return 0;
}

int *alocarMemoria(int *p, int tamanho) {
    int *pr = NULL;
    if (!(pr = (int*)realloc(p, tamanho * sizeof(int)))) {
        printf("Memória indisponível!");
        exit(1);
    }
    return pr;
}

void populateVetor(int *ponteiro, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(ponteiro + i) = rand() % RG;
    }
}

void exibirVetor(int *ponteiro, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %d \tEndereco: %p \n", *(ponteiro + i), (ponteiro + i));
    }
}

float calcularEMQ(int *vetorA, int *vetorB, int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        float diferenca = *(vetorA + i) - *(vetorB + i);
        soma += diferenca * diferenca;
    }
    return soma / tamanho;
}