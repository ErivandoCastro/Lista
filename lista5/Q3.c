#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 50

int *alocarMemoria(int *p, int tamanho);
void populateVetor(int *ponteiro, int tamanho);
void exibirVetor(int *ponteiro, int tamanho);
int *getMenor(int *ponteiro, int tamanho);
int *getMaior(int *ponteiro, int tamanho);

int main(int argc, char *argv[]) {
     if (argc != 2) {
        printf("Uso: %s <tamanho do vetor>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);

    int *ponteiro = alocarMemoria(NULL, tamanho);

    srand(time(NULL));
    populateVetor(ponteiro, tamanho);
    
    exibirVetor(ponteiro, tamanho);

    int *maiorEnd = getMaior(ponteiro, tamanho);
    int *menorEnd = getMenor(ponteiro, tamanho);
    printf("\nO endereco do maior inteiro eh: %p\n", maiorEnd);
    printf("O endereco do menor inteiro eh: %p\n", menorEnd);

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

int *getMenor(int *ponteiro, int tamanho){
    int *pme = ponteiro;
    for(int i = 0; i < tamanho; i++){
         if(*(ponteiro + i) < *pme){
            pme = (ponteiro + i);
         }    
    }
    return pme;
}

int *getMaior(int *ponteiro, int tamanho){
    int *pma = ponteiro;
    for(int i = 0; i < tamanho; i++){
         if(*(ponteiro + i) > *pma){
            pma = (ponteiro + i);
         }    
    }
    return pma;
}


