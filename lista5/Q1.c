#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b);
int multiplicar(int a, int b);

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <valor1> <valor2> <codigo_operacao>\n", argv[0]);
        printf("Codigo de operacao: 1 para soma, 2 para multiplicacao\n");
        return 1;
    }

    int valor1 = atoi(argv[1]);
    int valor2 = atoi(argv[2]);
    int codigo_operacao = atoi(argv[3]);

    int resultado;

    if (codigo_operacao == 1) {
        resultado = somar(valor1, valor2);
    } else if (codigo_operacao == 2) {
        resultado = multiplicar(valor1, valor2);
    } else {
        printf("Codigo de operacao invalido! Use 1 para soma ou 2 para multiplicacao.\n");
        return 1;
    }

    printf("Resultado: %d\n", resultado);
    
    return 0;
}

int somar(int a, int b) {
    return a + b;
}

int multiplicar(int a, int b) {
    return a * b;
}
