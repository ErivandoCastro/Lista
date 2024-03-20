#include <stdio.h>
#include <locale.h>

void calculaPotencia(int base, int expoente) {
    int potencia = 1;
    for (int i = 0; i < expoente; i++) {
        potencia *= base;
    }
    printf("%d\n", potencia);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int faixa1, faixa2;

    printf("Digite o valor A do intervalo: ");
    scanf("%d", &faixa1);
    printf("Digite o valor B do intervalo: ");
    scanf("%d", &faixa2);

    if(faixa2 > faixa1){
        for(int i = faixa1; i <= faixa2; i++){
            if (i % 4 == 0){
            calculaPotencia(i, 2);
            }
        }
    } else if (faixa1 > faixa2) {
        for(int i = faixa1; i >= faixa2; i--){
            if (i % 4 == 0){
            calculaPotencia(i, 2);
            }
        }
    }
    
    return 0;
}

