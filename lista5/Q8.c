#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 70

int *alocarMemoria(int *p, int qtdLin, int qtdCol);
void exibirMatriz(int *ponteiro, int qtdLin, int qtdCol);
void populateMatriz(int *ponteiro, int qtdLin, int qtdCol);
void binarizaMatriz(int *ponteiro, int qtdLin, int qtdCol, int t);


int main(){
    int qtdLin, qtdCol, t;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &qtdLin);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &qtdCol);

    printf("Digite o valor liminar 'T': ");
    scanf("%d", &t);

    int *ponteiro = alocarMemoria(NULL, qtdLin, qtdCol);

    populateMatriz(ponteiro, qtdLin, qtdCol);
    exibirMatriz(ponteiro, qtdLin, qtdCol);

    printf("\n");
    binarizaMatriz(ponteiro, qtdLin, qtdCol, t);
    exibirMatriz(ponteiro, qtdLin, qtdCol);

    free(ponteiro);

    return 0;

}

int *alocarMemoria(int *p, int qtdLin, int qtdCol){
    int *pr = NULL;
    if (!(pr = (int *)realloc(p, qtdLin * qtdCol * sizeof(int)))){
        printf("Memória insuficiente!");
        exit(1);
    }

    return pr;
}

void exibirMatriz(int *ponteiro, int qtdLin, int qtdCol){
    for (int i = 0; i < (qtdLin * qtdCol); i++){
        printf("%d \t", *(ponteiro + i));
        if (!((i + 1) % qtdCol)) printf("\n");
    }
}

void populateMatriz(int *ponteiro, int qtdLin, int qtdCol){
    for(int i = 0; i < (qtdLin * qtdCol); i++){
        *(ponteiro + i) = rand() % MX;
    }
}

void binarizaMatriz(int *ponteiro, int qtdLin, int qtdCol, int t){
    for(int i = 0; i < (qtdLin * qtdCol); i++){
        if(*(ponteiro + i) > t){
            *(ponteiro + i) = 1;
        } else {
            *(ponteiro + i) = 0;
        }
    }
}