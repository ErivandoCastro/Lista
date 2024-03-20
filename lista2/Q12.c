#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, i;

    printf("Digite um numero inteiro para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}