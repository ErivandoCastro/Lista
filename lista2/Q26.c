#include <stdio.h>
#include <locale.h>

void decToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i;

    printf("Decimal\t\tBinary\t\tOctal\t\tHexadecimal\n");
    printf("-------\t\t------\t\t-----\t\t-----------\n");

    for (i = 1; i <= 256; i++) {
        printf("%d\t\t", i);
        decToBinary(i);
        printf("\t\t%o\t\t%X\n", i, i);
    }

    return 0;
}