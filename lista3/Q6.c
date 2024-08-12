#include <stdio.h>
#include <string.h>

#define max 100

void reverse(char string[]) {
    int tamanho = strlen(string);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = string[i];
        string[i] = string[tamanho - i - 1];
        string[tamanho - i - 1] = temp;
    }
}

int main() {
    char string[max];

    printf("Digite uma string: ");
    fgets(string, max, stdin);

    string[strcspn(string, "\n")] = 0;

    printf("String invertida: ");
    reverse(string);
    printf("%s\n", string);

    return 0;
}
