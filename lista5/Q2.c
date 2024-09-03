#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 50

int *alocarMemoria(int *p, int tamanho);
void populateVetor(int *ponteiro, int tamanho);
void exibirVetor(int *ponteiro, int tamanho);
int *getMenor(int *ponteiro, int tamanho);


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

    int *menorEnd = getMenor(ponteiro, tamanho);
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
    int *pm = ponteiro;
    for(int i = 0; i < tamanho; i++){
         if(*(ponteiro + i) < *pm){
            pm = (ponteiro + i);
         }    
    }
    return pm;
}


