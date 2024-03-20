#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int soma_div_3 = 0;
    int soma_div_5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
            soma_div_3 += i;
        } else if (i > 100 && i % 5 == 0) {
            soma_div_5 += i;
        }
    }

    printf("Soma dos números divisíveis por 3 no intervalo [0,100]: %d\n", soma_div_3);
    printf("Soma dos números divisíveis por 5 no intervalo ]100,200]: %d\n", soma_div_5);

    return 0;
}
