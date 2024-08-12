#include <stdio.h>

#define tamanho 50

int main(){
    char string[tamanho];
    int cont = 0;

    printf("Digite uma string: ");
    scanf("%s", string);

     const char *ptr = string; 

    while (*ptr != '\0')
    {
        cont++;
        ptr++;
    }
    
    printf("Tamanho: %d", cont);

    
    return 0;
}