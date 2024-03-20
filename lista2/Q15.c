#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int base = 3;
    int expoente;
    int resultado = 1;

    printf("Potências de 3:\n");

    for (expoente = 0; expoente <= 7; expoente++) {
        printf("3^%d = %d\n", expoente, resultado);
        resultado *= base;
    }

    return 0;
}