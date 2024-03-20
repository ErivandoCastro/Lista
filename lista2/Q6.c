#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int voto, paulo = 0, renata = 0, branco = 0, nulos = 0, total = 0;

    printf("Urna Eletronica - Eleicao para Presidente\n\n");
    printf("Candidatos:\n");
    printf("5 - Paulo\n");
    printf("7 - Renata\n\n");

    while (1) {
        printf("Digite o numero do seu candidato (ou 0 para voto em branco, negativo para encerrar): ");
        scanf("%d", &voto);

        if (voto < 0) {
            break;
        } else if (voto == 5) {
            printf("Voto para Paulo registrado. Confirma? (1 - Sim, 0 - Nao): ");
            int confirmacao;
            scanf("%d", &confirmacao);
            if (confirmacao == 1) {
                paulo++;
                total++;
                printf("Voto registrado com sucesso!\n");
            } else {
                printf("Voto cancelado.\n");
            }
        } else if (voto == 7) {
            printf("Voto para Renata registrado. Confirma? (1 - Sim, 0 - Nao): ");
            int confirmacao;
            scanf("%d", &confirmacao);
            if (confirmacao == 1) {
                renata++;
                total++;
                printf("Voto registrado com sucesso!\n");
            } else {
                printf("Voto cancelado.\n");
            }
        } else if (voto == 0) {
            printf("Voto em branco registrado. Confirma? (1 - Sim, 0 - Nao): ");
            int confirmacao;
            scanf("%d", &confirmacao);
            if (confirmacao == 1) {
                branco++;
                total++;
                printf("Voto registrado com sucesso!\n");
            } else {
                printf("Voto cancelado.\n");
            }
        } else {
            printf("Voto nulo registrado. Confirma? (1 - Sim, 0 - Nao): ");
            int confirmacao;
            scanf("%d", &confirmacao);
            if (confirmacao == 1) {
                nulos++;
                total++;
                printf("Voto registrado com sucesso!\n");
            } else {
                printf("Voto cancelado.\n");
            }
        }
    }

    printf("\n\nResultado da Eleicao:\n");
    printf("Total de Votos: %d\n", total);
    printf("Votos para Paulo (5): %d (%.2f%%)\n", paulo, (float)paulo / total * 100);
    printf("Votos para Renata (7): %d (%.2f%%)\n", renata, (float)renata / total * 100);
    printf("Votos em Branco: %d (%.2f%%)\n", branco, (float)branco / total * 100);
    printf("Votos Nulos: %d (%.2f%%)\n", nulos, (float)nulos / total * 100);

    if (paulo > renata) {
        printf("Candidato Eleito: Paulo\n");
    } else if (renata > paulo) {
        printf("Candidato Eleito: Renata\n");
    } else {
        printf("Empate! Nenhum candidato foi eleito.\n");
    }

    return 0;
}
