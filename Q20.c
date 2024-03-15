#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    int ultimo_bit = (n >> 1) << 1;
    int diferenca = n - ultimo_bit;

    printf("O numero é %s\n", diferenca == 0 ? "par" : "impar");
    return 0;
}