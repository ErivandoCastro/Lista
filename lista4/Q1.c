#include <stdio.h>

void soma(int *ptr1, int *ptr2, int *ptrResultado) {
    *ptrResultado = *ptr1 + *ptr2;
}

int main() {
    int num1, num2, resultado;
    int *ptr1, *ptr2, *ptrResultado;

    ptr1 = &num1;
    ptr2 = &num2;
    ptrResultado = &resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", ptr1);
    printf("Digite o segundo valor: ");
    scanf("%d", ptr2);

    soma(ptr1, ptr2, ptrResultado);

    printf("Resultado da soma: %d\n", *ptrResultado);
    printf("Endereco de memoria do valor resultante: %p\n", ptrResultado);

    return 0;
}
