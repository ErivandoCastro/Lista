#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, maior_valor, menor_valor;
    maior_valor = menor_valor = 0;

    while (1) {
        printf("Digite um número inteiro: ");
        scanf("%d", &n);

        if (n < 0 && n % 2 == 0) {
            break;
        }

        if (maior_valor == 0 || n > maior_valor) {
            maior_valor = n;
        }

        if (menor_valor == 0 || n < menor_valor) {
            menor_valor = n;
        }
    }

    if (maior_valor == 0 || menor_valor == 0) {
        printf("Nenhum número foi digitado antes da condição de saída.\n");
    } else {
        printf("Maior valor: %d\n", maior_valor);
        printf("Menor valor: %d\n", menor_valor);
        printf("Produto: %d\n", maior_valor * menor_valor);
    }

    return 0;
}
