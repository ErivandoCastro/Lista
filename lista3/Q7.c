#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define tamanho 3

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[tamanho];
    int soma = 0;
    double produto = 1.0;

    srand((unsigned) time(NULL));

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 20;
        soma += vetor[i];
        produto *= vetor[i];
    }

    double media_aritmetica = (double) soma / tamanho;

    double media_geometrica = pow(produto, 1.0 / tamanho);

    printf("Vetor gerado: [%d, %d, %d]\n", vetor[0], vetor[1], vetor[2]);
    printf("Média Aritmética: %.2f\n", media_aritmetica);
    printf("Média Geométrica: %.2f\n", media_geometrica);

    return 0;
}