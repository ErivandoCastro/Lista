#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int dia;

    while (1) {
        printf("Digite o dia da semana - 1 a 7 (0 para sair): ");
        scanf("%d", &dia);

        if (dia == 0) {
            break;
        } else if (dia < 1 || dia > 7) {
            printf("Número de dia inválido\n");
        } else {
            switch(dia) {
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda-feira\n");
                    break;
                case 3:
                    printf("Terça-feira\n");
                    break;
                case 4:
                    printf("Quarta-feira\n");
                    break;
                case 5:
                    printf("Quinta-feira\n");
                    break;
                case 6:
                    printf("Sexta-feira\n");
                    break;
                case 7:
                    printf("Sábado\n");
                    break;
            }
        }
    }

    return 0;
}
