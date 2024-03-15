#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float conta, vt;

    printf("Digite o valor da conta do restaurante: ");
    scanf("%f", &conta);

    vt = (conta * 0.1) + conta;
    printf("O valor total a ser pago é: %.2fR$", vt);
    return 0;
}