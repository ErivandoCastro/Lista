#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    A = A ^ B;
    B = A ^ B;
    A = A ^ B;

    printf("Apos a troca, o valor de A e: %d\n", A);
    printf("Apos a troca, o valor de B e: %d\n", B);

    return 0;
}