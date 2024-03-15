#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    printf("Valor do diametro: %.2f\n", (raio * 2));
    printf("Valor da circunferencia: %.2f\n", (2 * 3.14159 * raio));
    printf("Area da circunferencia: %.2f\n", (3.14159 * (raio * raio)));

    return 0;
}