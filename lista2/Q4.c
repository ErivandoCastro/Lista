#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int altura_jose = 150;
    int altura_pedro = 110;
    int cresc_jose = 2;
    int cresc_pedro = 3;
    int anos = 0;

    while (altura_pedro <= altura_jose) {
        altura_jose += cresc_jose;
        altura_pedro += cresc_pedro;
        anos++;
    }

    printf("Em %d anos, Pedro será maior que José.\n", anos);

    return 0;
}
