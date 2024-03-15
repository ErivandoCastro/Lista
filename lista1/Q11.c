#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float reais, cotacao;

    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &reais);
    printf("Digite o valor da cotação do dólar: ");
    scanf("%f", &cotacao);

    reais = reais / cotacao;
    printf("Conversão: %.2f", reais);
    return 0;
}