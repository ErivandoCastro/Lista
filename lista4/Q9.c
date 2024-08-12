#include <stdio.h>

#define k 5

int main() {
    int vetor[k] = {64, 34, 25, 12, 22};
    int *p = vetor;

    for (int i = 0; i < k - 1; i++) { // ordenar vetor
        for (int j = 0; j < k - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
