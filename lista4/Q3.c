#include <stdio.h>

int main() {
    int numero = 0;
    int menor = 0;
    int primeiro = 1;
    int *ptrMenor;

    ptrMenor = &menor;
    

    printf("Digite um número (negativo para sair): ");
    while (scanf("%d", &numero) && numero >= 0) {
        if (primeiro) {
            menor = numero;
            primeiro = 0;
        } else if (numero < *ptrMenor) {
            *ptrMenor = numero;
        }
        printf("O menor número fornecido até agora é: %d\n", *ptrMenor);
        printf("Digite um número (negativo para sair): ");
    }

    printf("Fim\n");

    return 0;
}
