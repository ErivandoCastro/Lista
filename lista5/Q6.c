#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 50

int *alocarMemoria(int *p, int tamanho);
void populateVetor(int *ponteiro, int tamanho);
void exibirVetor(int *ponteiro, int tamanho);
float getMedia(int *ponteiro, int tamanho);
void ordenarVetor(int *ponteiro, int tamanho);
float getMediana(int *ponteiro, int tamanho);
int getModa(int *ponteiro, int tamanho);

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *ponteiro = alocarMemoria(NULL, tamanho);

    srand(time(NULL));
    populateVetor(ponteiro, tamanho);
    exibirVetor(ponteiro, tamanho);
    
    float mediaVetor = getMedia(ponteiro, tamanho);

    ordenarVetor(ponteiro, tamanho);
    float medianaVetor = getMediana(ponteiro, tamanho);

    int modaVetor = getModa(ponteiro, tamanho);

    printf("\nMedia: %.2f\n", mediaVetor);
    printf("Moda: %d\n", modaVetor);
    printf("Mediana: %.2f\n", medianaVetor);

    free(ponteiro);

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

float getMedia(int *ponteiro, int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma = soma + *(ponteiro + i);
    }
    float media = ((float) soma) / tamanho;
    return media;
}

void ordenarVetor(int *ponteiro, int tamanho){
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (*(ponteiro + j) > *(ponteiro + j + 1)) {
                int temp = *(ponteiro + j);
                *(ponteiro + j) = *(ponteiro + j + 1);
                *(ponteiro + j + 1) = temp;
            }
        }
    }
}

float getMediana(int *ponteiro, int tamanho){
    float mediana = 0.0;
    if(tamanho % 2 == 0){
        mediana = (*(ponteiro + (tamanho / 2 + 1)) + *(ponteiro + (tamanho / 2))) / 2.0;
    }
    else {
        mediana = *(ponteiro + (tamanho / 2));
    }
    return mediana;
}

int getModa(int *ponteiro, int tamanho) {
    int *frequencia;
    if (!(frequencia = (int*)calloc(RG, sizeof(int)))){
        printf("Memória indisponível!");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        frequencia[*(ponteiro + i)]++;
    }

    int moda = -1;
    int maxFrequencia = 0;
    for (int i = 0; i < RG; i++) {
        if (*(frequencia + i) > maxFrequencia) {
            maxFrequencia = *(frequencia + i);
            moda = i;
        }
    }

    free(frequencia);
    return moda;
}