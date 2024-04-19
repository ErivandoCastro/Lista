#include <stdio.h>
#include <string.h>
#include <locale.h>

#define tamanho 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str1[tamanho], str2[tamanho];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}