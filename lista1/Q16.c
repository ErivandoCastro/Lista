#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor_hora, num_horas, salarioBruto, desconto, salarioLiquido;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &num_horas);
    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &desconto);

    salarioBruto = num_horas * valor_hora;
    salarioLiquido = salarioBruto - (salarioBruto * (desconto / 100));

    printf("Salário bruto: %.2f", salarioBruto);
    printf("Salário Líquido: %.2f", salarioLiquido);
    return 0;
}