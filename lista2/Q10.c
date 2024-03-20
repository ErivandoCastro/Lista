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
    
    for(int i = 15; i <= 90; i++){
        if (i % 4 == 0){
            calculaPotencia(i, 2);
        }
    }
    return 0;
}
