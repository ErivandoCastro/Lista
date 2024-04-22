#include <stdio.h>

#define tamanho 3

int main() {
    int matriz[tamanho][tamanho];
    
    printf("Digite os elementos da matriz %dx%d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", matriz[i][i]);
    }
    
    return 0;
}