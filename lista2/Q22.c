#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, digito = 0, quant = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    while (num > 0) {
        digito = num % 10;
        if(digito == 7){
            quant = quant + 1;
        }
        num = num / 10;
    }

    printf("Qauntidade: %d", quant);
    return 0;
}
