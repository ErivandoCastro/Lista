#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

void calcular_media(struct Aluno *alunos, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        (alunos + i)->media = ((alunos + i)->nota1 + (alunos + i)->nota2) / 2.0;
    }
}

int main() {
    struct Aluno alunos[3];
    struct Aluno *p_aluno = alunos;

    for (int i = 0; i < 3; i++) {
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &(p_aluno + i)->nota1);

        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &(p_aluno + i)->nota2);
    }

    calcular_media(p_aluno, 3);

    for (int i = 0; i < 3; i++) {
        printf("Aluno %d - Nota 1: %.2f, Nota 2: %.2f, Média: %.2f\n", 
               i + 1, (p_aluno + i)->nota1, (p_aluno + i)->nota2, (p_aluno + i)->media);
    }

    return 0;
}
