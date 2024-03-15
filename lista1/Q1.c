#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x1, x2, x3;

    x1 = 7 + 3 * 6 / 2 - 1;
    printf("A ordem é Divisão, Multiplicação, Soma e Subtraçãoo, X1 = %.2d\n", x1);

    x2 = 2 % 2 + 2 * 2 - 2 / 2;
    printf("A ordem é Resto da divisão, Divisão, Produto, Soma e Subtração, X2 = %.2d\n", x2);

    x3 = (3 * 9 * (3 + (9 * 3 / (3))));
    printf("A ordem é do parêntese mais interno, para o mais externo, X3 = %.2d", x3);
    return 0;
}