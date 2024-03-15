#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas (x y) do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas (x y) do segundo ponto: ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os dois pontos é: %.2f\n", distancia);

    return 0;
}
