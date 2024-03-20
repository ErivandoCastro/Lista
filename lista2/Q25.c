#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int iteracoes;
    double pi = 0.0;

    printf("Digite o número de iterações para calcular π: ");
    scanf("%d", &iteracoes);

    for (int i = 0; i < iteracoes; i++) {
        double termo = 4.0 / (2 * i + 1);
        if (i % 2 == 0) {
            pi += termo;
        } else {
            pi -= termo;
        }

        printf("π com %d termo(s): %.10f\n", i + 1, pi);
    }

    return 0;
}
