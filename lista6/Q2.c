#include <stdio.h>
#include <string.h>

#define MAX_NOME 50


struct Estoque {
    char nomePeca[MAX_NOME];
    int numeroPeca;
    float preco;
    int numeroPedido;
};

int main() {
    struct Estoque peca;

    strcpy(peca.nomePeca, "Parafuso");
    peca.numeroPeca = 12345;
    peca.preco = 1.50;
    peca.numeroPedido = 6789;
    
    printf("Nome da peça: %s\n", peca.nomePeca);
    printf("Número da peça: %d\n", peca.numeroPeca);
    printf("Preço: R$ %.2f\n", peca.preco);
    printf("Número do pedido: %d\n", peca.numeroPedido);

    return 0;
}
