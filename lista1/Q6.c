#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    printf("Digite o sexo, (M) para masculino ou (F) para feminino: ");
    scanf(" %c", &sexo);

    if (sexo == 'M'){
        peso_ideal = 72.7 * altura - 58;
        printf("Seu peso ideal é: %.2f", peso_ideal);
    } else if (sexo == 'F'){
        peso_ideal = 62.1 * altura - 44.7;
        printf("Seu peso ideal é: %.2f", peso_ideal);
    } else{
        printf("Ocorreu um erro!");
    }
    return 0;
}