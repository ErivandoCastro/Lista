#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x;

    printf("Digite um valor real: ");
    scanf("%f", &x);

    printf("Seu número, com apenas uma casa decimal: %.1f\n", x);

    return 0;
}