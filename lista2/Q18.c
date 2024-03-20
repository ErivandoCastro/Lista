#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int quadrado = 64;
    unsigned long long int total_graos = 0;
    unsigned long long int graos = 1;

    for (int i = 1; i <= quadrado; i++) {
        total_graos += graos;
        graos *= 2;
    }

    printf("O total de grãos de trigo no tabuleiro é: %llu\n", total_graos);

    return 0;
}
