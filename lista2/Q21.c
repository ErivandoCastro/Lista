#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, originalNum, reversedNum = 0, ultimo_digito;

    printf("Digite um número de cinco dígitos: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0){
        ultimo_digito = num % 10;
        reversedNum = reversedNum * 10 + ultimo_digito;
        num /= 10;
    }

    if (originalNum == reversedNum)
        printf("%d é um palíndromo.\n", originalNum);
    else
        printf("%d não é um palíndromo.\n", originalNum);

    return 0;
}
