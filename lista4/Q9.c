#include <stdio.h>

#define k 5

void bubble_sort(int *p, int n) {
    for (int i = 0; i < n - 1; i++) { // ordenar vetor
        for (int j = 0; j < n - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main() {
    int vetor[k] = {64, 34, 25, 12, 22};
    int *p = vetor;

    bubble_sort(p, k);

    for (int i = 0; i < k; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
