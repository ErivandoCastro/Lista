#include <stdio.h>
#include <string.h>
#include <locale.h>

#define tamanho 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str1[tamanho], str2[tamanho];
    int i, igual = 1;

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        igual = 0;
    } else {
        for (i = 0; str1[i] != '\0'; i++) {
            if (str1[i] != str2[i]) {
                igual = 0;
                break;
            }
        }
    }

    if (igual) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
