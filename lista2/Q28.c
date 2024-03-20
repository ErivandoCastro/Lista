#include <stdio.h>
#include <locale.h>

unsigned char esconder_bits(unsigned char x, unsigned char y) {
   
    if (y < 5) {
        printf("O valor de Y precisa ser maior ou igual a 5.\n");
        return 0;
    }

    unsigned char mascara = 0xF8; 

    for (int i = -4; i <= 4; i++) {
        int posicao = y + i;

        if (posicao >= 0 && posicao <= 7) {
            int deslocamento = (i >= 0) ? i : -i;

            unsigned char novo_valor = (x >> deslocamento) & 0x01;
            mascara |= novo_valor << posicao;
        }
    }

    return mascara;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned char x, y;

    printf("Digite o valor de X: ");
    scanf("%hhu", &x);

    printf("Digite o valor de Y (>=5): ");
    scanf("%hhu", &y);

    unsigned char resultado = esconder_bits(x, y);

    printf("Resultado: %u\n", resultado);

    return 0;
}
