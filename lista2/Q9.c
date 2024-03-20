#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int termos = 20;
    int primeiro = 1, segundo = 1, proximo;

    printf("Série de Fibonacci até o vigésimo termo:\n");
    printf("%d, %d, ", primeiro, segundo);

    for (int i = 3; i <= termos; i++) {
        proximo = primeiro + segundo;
        printf("%d, ", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");
    return 0;
}
