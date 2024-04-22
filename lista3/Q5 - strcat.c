#include <stdio.h>
#include <string.h>
#include <locale.h>

#define max 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str1[max];
    char str2[max];

    printf("Digite a primeira string: ");
    fgets(str1, max, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, max, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("Strings concatenadas: %s\n", str1);

    return 0;
}