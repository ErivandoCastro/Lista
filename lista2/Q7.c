#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v1, v2, result;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);

    do {
        printf("Digite o segundo valor (não pode ser zero): ");
        scanf("%d", &v2);
    } while (v2 == 0);

    result = v1 / v2;

    printf("O resultado é %d\n", result);

    return 0;
}