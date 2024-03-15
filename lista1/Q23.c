#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, centena, dezena, unidade, inverso;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    inverso = unidade * 100 + dezena * 10 + centena;

    printf("O número inverso é: %d\n", inverso);

    return 0;
}