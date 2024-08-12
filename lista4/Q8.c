#include <stdio.h>
#include <string.h>

#define tamanho 70

int main(){
    char str[tamanho];
    char caractere;
    char *result = NULL;

    printf("Digite a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Digite o caratere a ser buscado: ");
    scanf(" %c", &caractere);

    char *ptr = str;

    int size = strlen(ptr);

    for(int i = 0; i < size; i++){
        if(*(ptr + i) == caractere){
            result = (ptr + i);
            break;
        }
    }

    if(result != NULL){
        printf("Caractere '%c' encontrado!\n", caractere);
    } else {
        printf("Caractere nao encontrado!\n");
    }

    return 0;
}