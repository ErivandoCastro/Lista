#include <stdio.h>

#define max 100

int main() {
    char origem[max] = "Hello, world!";
    char destino[max];
    
    char *src = origem;
    char *dest = destino;
    
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    
    *dest = '\0';
    
    printf("String de origem: %s\n", origem);
    printf("String de destino: %s\n", destino);
    
    return 0;
}
