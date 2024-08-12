#include <stdio.h>
#include <string.h>

#define tamanho 50

int main(){
    char string[tamanho];

    printf("Digite uma string: ");
    scanf("%s", string);

    const char *ptr = string;

    int total = strlen(ptr);

    printf("O tamanho total da string eh: %d", total);
    
    return 0;
}