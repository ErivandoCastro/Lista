#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, n, result;

    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite a potência n: ");
    scanf("%d", &n);

    result = x << n;

    printf("O produto de %d por 2 elevado a %d é: %d\n", x, n, result);

    return 0;
}