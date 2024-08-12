#include <stdio.h>
#include <locale.h>

#define tamanho 15

int main(){
    setlocale(LC_ALL, "Portuguese");
    float vetor[tamanho];
    float menor, maior, soma;

    printf("Digite %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i);
        scanf("%f", &vetor[i]);
    }

    menor = maior = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    soma = menor + maior;
    printf("A soma do menor e do maior elemento do vetor eh: %.2f\n", soma);

    return 0;
}