#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    int abs_num = sqrt(x * x);
    printf("O valor absoluto de %d é %d\n", x, abs_num);

    return 0;
}
