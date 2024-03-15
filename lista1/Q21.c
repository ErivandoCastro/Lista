#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, multiplo;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &n2);

    multiplo = ((n1 / n2) * n2) == n1;

    printf("%s\n", multiplo ? "O primeiro numero é multiplo do segundo." : "O primeiro numero não é multiplo do segundo.");

    return 0;
}