#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 20

typedef struct {
    int *vetor;          
    int quantidade;      
    float media;        
} DadosVetor;

float calcularMedia(int *vetor, int quantidade);
void preencherVetor(int *vetor, int quantidade, int max);
int *alocarMemoria(int *p, int quantidade);

int main() {
    DadosVetor dados;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &dados.quantidade);

    dados.vetor = alocarMemoria(dados.vetor, dados.quantidade);

    srand(time(NULL));
    preencherVetor(dados.vetor, dados.quantidade, MX);
    dados.media = calcularMedia(dados.vetor, dados.quantidade);

    printf("Média dos elementos: %.2f\n", dados.media);

    free(dados.vetor);

    return 0;
}

int *alocarMemoria(int *p, int quantidade){
    if(!(p = (int*) malloc(quantidade * sizeof(int)))){
        puts("Memória insuficiente!");
        exit(1);
    }
    return p;
}

float calcularMedia(int *vetor, int quantidade) {
    int soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += *(vetor + i);
    }
    return (float)soma / quantidade;
}

void preencherVetor(int *vetor, int quantidade, int max){
    for(int i = 0; i < quantidade; i++){
        *(vetor + i) = rand() % max;
    }
}
