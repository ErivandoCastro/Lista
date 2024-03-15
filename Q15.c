#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int dias;
    float valorBruto, valorLiquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    valorBruto = dias * 50.25;

    if(dias <= 10){
        valorLiquido = valorBruto - (valorBruto * 0.1);
        printf("Valor líquido a ser pago: %.2f", valorLiquido);
    } else if (dias>10 && dias<=20 ){
        valorBruto += (valorBruto * 0.2);
        valorLiquido = valorBruto - (valorBruto * 0.1);
        printf("Valor líquido a ser pago: %.2f", valorLiquido);
    } else if (dias > 20){
        valorBruto += (valorBruto * 0.3);
        valorLiquido = valorBruto - (valorBruto * 0.1);
        printf("Valor líquido a ser pago: %.2f", valorLiquido);
    }

    return 0;
}