#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf("Digite um valor inteiro decimal: ");
    scanf("%d", &x);

    printf("Hexadecimal: %X\n", x);
    printf("Octal: %o\n", x);

    return 0;
}
