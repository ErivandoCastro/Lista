#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, media_aritmetica, media_geometrica;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    media_aritmetica = (num1 + num2 + num3) / 3;

    media_geometrica = pow(num1 * num2 * num3, 1.0/3.0);

    printf("Média aritmética: %.2f\n", media_aritmetica);
    printf("Média geométrica: %.2f\n", media_geometrica);

    return 0;
}
