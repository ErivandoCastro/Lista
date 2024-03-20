#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, quantidade = 0;

    printf("Digite o valor da faixa A do intervalo: ");
    scanf("%d", &a);
    printf("Digite o valor da faixa B do intervalo: ");
    scanf("%d", &b);

    if(b > a){
        for(int i = a; i <= b; i++){
            if(i % 3 == 0){
                quantidade++;
            }
        }
    } else if (a > b){
        for(int i = a; i >= b; i--){
            if(i % 3 == 0){
                quantidade++;
            }
        }
    }

    printf("Existem %d números divisíveis por 3 nesse intervalo.", quantidade);
    return 0;
}