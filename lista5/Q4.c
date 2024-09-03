#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 50

int *alocarMemoria(int *p, int tamanho);
void populateVetor(int *px, int tamanho);
void exibirVetorInt(int *px, int tamanho);
void exibirVetorFloat(float *pxNormalizado, int tamanho);
int *getMaior(int *px, int tamanho);
int *getMenor(int *px, int tamanho);
float *normalizaDados(int *px, int tamanho, int *menorEnd, int *maiorEnd);

int main()
{
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *px = alocarMemoria(NULL, tamanho);

    srand(time(NULL));
    populateVetor(px, tamanho);

    printf("\nVetor inicial: ");
    exibirVetorInt(px, tamanho);

    int *maiorEnd = getMaior(px, tamanho);
    int *menorEnd = getMenor(px, tamanho);

    float *pxNormalizado = normalizaDados(px, tamanho, menorEnd, maiorEnd);

    printf("\nVetor normalizado: ");
    exibirVetorFloat(pxNormalizado, tamanho);

    free(px);
    free(pxNormalizado);

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

void populateVetor(int *px, int tamanho){
    for (int i = 0; i < tamanho; i++){
        *(px + i) = rand() % MX;
    }
}

void exibirVetorInt(int *px, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", *(px + i));
    }
    printf("\n");
}

void exibirVetorFloat(float *pxNormalizado, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%.2f ", *(pxNormalizado + i));
    }
    printf("\n");
}

int *getMaior(int *px, int tamanho){
    int *pma = px;
    for (int i = 0; i < tamanho; i++){
        if (*(px + i) > *pma){
            pma = (px + i);
        }
    }
    return pma;
}

int *getMenor(int *px, int tamanho){
    int *pme = px;
    for (int i = 0; i < tamanho; i++){
        if (*(px + i) < *pme){
            pme = (px + i);
        }
    }
    return pme;
}

float *normalizaDados(int *px, int tamanho, int *menorEnd, int *maiorEnd){
    float *pn = (float *)malloc(tamanho * sizeof(float));
    if (pn == NULL){
        printf("Memória insuficiente!");
        exit(1);
    }
    

    for (int i = 0; i < tamanho; i++){
        *(pn + i) = ((float)*(px + i) - *menorEnd) / (*maiorEnd - *menorEnd);
    }

    return pn;
}
