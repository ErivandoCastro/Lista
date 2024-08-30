#include <stdio.h>

#define max 100 

void copiarString(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++; 
    }
    *dest = '\0'; 
}

int main() {
    char origem[max] = "Hello, world!"; 
    char destino[max];
    
    copiarString(destino, origem);
    
    printf("String de origem: %s\n", origem);
    printf("String de destino: %s\n", destino);
    
    return 0;
}
