#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    double result;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    result = pow(x, 2);
    printf("Esse valor elevado ao quadrado é: %.0f", result);
    return 0;
}