#include <stdio.h>
#include <locale.h>

#define max 100

void concat(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str1[max], str2[max], result[2 * max];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    concat(str1, str2, result);

    printf("Strings concatenadas: %s\n", result);

    return 0;
}