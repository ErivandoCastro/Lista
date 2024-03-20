#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor, entrada, prestacao;
    
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);
    
    entrada = valor / 3;
    prestacao = valor - entrada;
    
    if (entrada < prestacao) {
        entrada = prestacao;
        prestacao = valor - 2 * entrada;
    }
    
    printf("Entrada: R$ %.2f\n", entrada);
    printf("Prestacoes: R$ %.2f\n", prestacao);


    return 0;
}