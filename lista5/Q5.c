#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 50

float *alocarMemoria(float *p, int tamanho);
void populateVetor(float *ponteiro, int tamanho);
void exibirVetor(float *ponteiro, int tamanho);
float somaVetor(float *ponteiro, int tamanho);


int main(int argc, char *argv[]) {
     if (argc != 2) {
        printf("Uso: %s <tamanho do vetor>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);

    float *ponteiro = alocarMemoria(NULL, tamanho);

    srand(time(NULL));
    populateVetor(ponteiro, tamanho);
    
    exibirVetor(ponteiro, tamanho);

    float somavetores = somaVetor(ponteiro, tamanho);
    printf("\nO valor da soma dos elementos do vetor eh: %.2f", somavetores);

    free(ponteiro);

    return 0;
}

float *alocarMemoria(float *p, int tamanho) {
    float *pr = NULL;
    if (!(pr = (float*)realloc(p, tamanho * sizeof(float)))) {
        printf("Memória indisponível!");
        exit(1);
    }
    return pr;
}

void populateVetor(float *ponteiro, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(ponteiro + i) = rand() % RG;
    }
}

void exibirVetor(float *ponteiro, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %f \tEndereco: %p \n", *(ponteiro + i), (ponteiro + i));
    }
}

float somaVetor(float *ponteiro, int tamanho){
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++){
        soma = soma + *(ponteiro + i);
    }
    return soma;
}