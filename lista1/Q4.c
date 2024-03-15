#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Triplo: %d\n", x * 3);
    printf("Quadrado: %d\n", x * x);
    printf("Meio: %d\n", x / 2);

    return 0;
}