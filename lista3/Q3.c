#include <stdio.h>
#include <locale.h>

#define max 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    char string[max];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(string, max, stdin);

    while (string[contador] != '\0') {
        contador++;
    }

    printf("A quantidade de caracteres da string fornecida é: %d\n", contador - 1);

    return 0;
}
