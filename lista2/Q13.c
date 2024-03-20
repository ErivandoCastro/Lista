#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, somatorio = 0;

    printf("Digite o valor da faixa A do intervalo: ");
    scanf("%d", &a);
    printf("Digite o valor da faixa B do intervalo: ");
    scanf("%d", &b);

    if (b > a) {
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                somatorio += i;
            }
        }
    } else if (a > b) {
        for (int i = a; i >= b; i--) {
            if (i % 2 == 0) {
                somatorio += i;
            }
        }
    }

    printf("Somatório: %d", somatorio);
    return 0;
}