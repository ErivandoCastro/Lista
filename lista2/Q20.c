#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            int fatorial = 1;
            for (int j = 1; j <= i; j++) {
                fatorial *= j;
            }
            printf("O fatorial de %d é: %d\n", i, fatorial);
        }
    }

    return 0;
}
