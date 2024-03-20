#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, maior, menor;

    printf("Digite um valor: ");
    scanf("%d", &n);
    maior = menor = n;

    while (n!=0)
    {
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }

        printf("Digite um valor: ");
        scanf("%d", &n);
    }
    
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}