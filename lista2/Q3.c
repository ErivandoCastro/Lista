#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int f, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &f);

    if (f < 0) {
        printf("Erro: O número deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= f; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %d\n", f, fatorial);
    return 0;
}