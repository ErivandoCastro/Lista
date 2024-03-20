#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int dia;

    do {
        printf("Digite o dia da semana - 1 a 7 (0 para sair): ");
        scanf("%d", &dia);

        if(dia < 0 || dia > 7){
            printf("Número de dia inválido\n");
        } else {
            switch (dia)
            {
            case 1:
                printf("O dia escolhido foi Domingo.\n");
                break;
            case 2:
                printf("O dia escolhido foi Segunda.\n");
                break;
            case 3:
                printf("O dia escolhido foi Terça.\n");
                break;
            case 4:
                printf("O dia escolhido foi Quarta.\n");
                break;
            case 5:
                printf("O dia escolhido foi Quinta.\n");
                break;
            case 6:
                printf("O dia escolhido foi Sexta.\n");
                break;
            case 7:
                printf("O dia escolhido foi Sábado.\n");
                break;
            case 0:
                break;
            }
        }
    } while (dia != 0);
    
    return 0;
}