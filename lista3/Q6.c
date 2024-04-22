#include <stdio.h>
#include <string.h>

#define max 100

void reverse(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[max];

    printf("Digite uma string: ");
    fgets(str, max, stdin);

    str[strcspn(str, "\n")] = 0;

    printf("String invertida: ");
    reverse(str);
    printf("%s\n", str);

    return 0;
}
