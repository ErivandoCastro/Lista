#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    printf("Soma: %d\n", x + y);
    printf("Diferença: %d\n", x - y);
    printf("Produto: %d\n", x * y);
    printf("Quociente: %d\n", x / y);
    printf("Resto da divisão: %d\n", x % y);

    return 0;
}