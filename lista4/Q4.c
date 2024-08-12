#include <stdio.h>

#define tamanho 5

int main() {

    int vetor_int[tamanho];
    int *pv = vetor_int;

    double vetor_double[tamanho];
    double *pvd = vetor_double;

    char vetor_char[tamanho];
    char *pvc = vetor_char;

    printf("\nDigite %d valores inteiros:\n", tamanho);
    for (int i = 0; i < tamanho; ++i) {
        scanf("%d", (pv + i));
    }

    printf("\nValores e Endereços do Vetor de Inteiros:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Valor: %d\tEndereço: %p\n", *(pv + i), (pv + i));
    }

    printf("\nDigite %d valores double:\n", tamanho);
    for (int i = 0; i < tamanho; ++i) {
        scanf("%lf", (pvd + i));
    }

    printf("\nValores e Endereços do Vetor de Doubles:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Valor: %lf\tEndereço: %p\n", *(pvd + i), (pvd + i));
    }

    printf("\nDigite %d caracteres:\n", tamanho);
    for (int i = 0; i < tamanho; ++i) {
        scanf(" %c", (pvc + i));
    }

    printf("\nValores e Endereços do Vetor de Caracteres:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Valor: %c\tEndereço: %p\n", *(pvc + i), (pvc + i));
    }

    return 0;
}