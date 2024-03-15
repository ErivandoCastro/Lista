#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, a, s;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    a = x - 1;
    s = x + 1;
    printf("Antecessor: %d\n", a);
    printf("Sucessor: %d\n", s);
    return 0;
}