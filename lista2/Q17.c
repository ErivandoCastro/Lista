#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int fahrenheit = 0;

    for(int celsius = 0; celsius <= 100; celsius +=10){
        fahrenheit = (celsius * 1.8) + 32;
        printf("Temperatura em Celsius: %d\n", celsius);
        printf("Temeperatura em Fahrenheit: %d\n", fahrenheit);
    }

    return 0;
}
