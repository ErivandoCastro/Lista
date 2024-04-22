#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 3
#define colunas 3

int main() {
    int matriz[linhas][colunas];
    int i, j, x, count = 0;

    srand(time(NULL));

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    printf("Matriz gerada:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite um valor inteiro para ser buscado na matriz: ");
    scanf("%d", &x);

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] == x) {
                count++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, count);

    return 0;
}
