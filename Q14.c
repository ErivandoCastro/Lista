#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float celsius, fahrenheit;

    printf("Digite o valor da temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;
    printf("Temperatura em Fahrenheit: %.1f°F", fahrenheit);
    return 0;
}