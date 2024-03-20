#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, soma = 0;
    float media;

    printf("Digite o valor A do intervalo: ");
    scanf("%d", &a);
    printf("Digite o valor B do intervalo: ");
    scanf("%d", &b);

    for(int i = a; i <= b; i++){
        soma += i;
    }

    media = (float)soma / (b - a + 1);

    printf("Média: %.2f", media);
    return 0;
}
