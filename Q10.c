#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float c, l, a, v;

    printf("Digite o valor do comprimento da caixa: ");
    scanf("%f", &c);
    printf("Digite o valor da largura da caixa: ");
    scanf("%f", &l);
    printf("Digite o valor da altura da caixa: ");
    scanf("%f", &a);

    v = c * l * a;
    printf("Volume da caixa: %.2f", v);
    return 0;
}