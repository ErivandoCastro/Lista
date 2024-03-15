#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float segundos, minutos, horas;

    printf("Digite o valor dos segundos: ");
    scanf("%f", &segundos);

    minutos = segundos / 60;
    horas = segundos / 3600;

    printf("Total de horas: %.2f\n", horas);
    printf("Total de minutos: %.2f\n", minutos);
    printf("Total de segundos: %.2f\n", segundos);
    return 0;
}