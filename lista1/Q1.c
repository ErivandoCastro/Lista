#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x1, x2, x3;

    x1 = 7 + 3 * 6 / 2 - 1;
    printf("A ordem � Divis�o, Multiplica��o, Soma e Subtra��oo, X1 = %.2d\n", x1);

    x2 = 2 % 2 + 2 * 2 - 2 / 2;
    printf("A ordem � Resto da divis�o, Divis�o, Produto, Soma e Subtra��o, X2 = %.2d\n", x2);

    x3 = (3 * 9 * (3 + (9 * 3 / (3))));
    printf("A ordem � do par�ntese mais interno, para o mais externo, X3 = %.2d", x3);
    return 0;
}