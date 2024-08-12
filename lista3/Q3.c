#include <stdio.h>
#include <string.h>
#include <locale.h>

#define max 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    char string[max];
    int contador = 0;

    printf("Digite a string: ");
    scanf("%s", string);

    while (string[contador] != '\0') {
        contador++;
    }

    printf("A quantidade de caracteres da string fornecida é: %d\n", contador);

    return 0;
}
