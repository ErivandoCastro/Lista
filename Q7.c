#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int h, m, s;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &h);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &m);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);

    s += (h * 3600) + (m * 60);
    printf("Quantidade total em segundos: %d", s);
    return 0;
}