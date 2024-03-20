#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x = 5;
    int y = 5;

    printf("Valor inicial de x: %d\n", x);
    printf("Valor inicial de y: %d\n", y);

    int pre_incremento = --x;
    printf("Valor de x após pré-incremento: %d\n", x);
    printf("Resultado do pré-incremento: %d\n", pre_incremento);

    int pos_incremento = y--;
    printf("Valor de y após pós-incremento: %d\n", y);
    printf("Resultado do pós-incremento: %d\n", pos_incremento);

    return 0;
}
