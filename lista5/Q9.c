#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 70

int *alocarMemoria(int *p, int qtdLin, int qtdCol);
void exibirMatriz(int *ponteiro, int qtdLin, int qtdCol);
void populateMatriz(int *ponteiro, int qtdLin, int qtdCol);
int somatorioDiagonal(int *ponteiro, int qtdLin, int qtdCol);
void verificarParidade(int soma);

int main(){
    int qtdLin, qtdCol;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &qtdLin);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &qtdCol);

    if(qtdLin != qtdCol){
        printf("A matriz deve ser quadrada para calcular a diagonal principal!\n");
        return 1;
    }

    int *ponteiro = alocarMemoria(NULL, qtdLin, qtdCol);

    srand(time(NULL));
    populateMatriz(ponteiro, qtdLin, qtdCol);

    exibirMatriz(ponteiro, qtdLin, qtdCol);

    int soma = somatorioDiagonal(ponteiro, qtdLin, qtdCol);

    verificarParidade(soma);

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

int somatorioDiagonal(int *ponteiro, int qtdLin, int qtdCol){
    int soma = 0;
    for(int i = 0; i < (qtdLin * qtdCol); i++){
        soma += *(ponteiro + i * qtdCol + i);
    }
    return soma;
}

void verificarParidade(int soma){
    if(soma % 2 == 0){
        printf("O somatorio da matriz eh par.\n");
    } else {
        printf("O somatorio da matriz eh impar.\n");
    }
}
