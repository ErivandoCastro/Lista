#include <stdio.h>
#include <string.h>
#include <locale.h>

#define max 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    char string[max];
    char caractere;
    int encontrado = 0;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++) {
        if (string[i] == caractere) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("A string contem o caractere '%c'.\n", caractere);
    } else {
        printf("A string nao contem o caractere '%c'.\n", caractere);
    }

    return 0;
}
