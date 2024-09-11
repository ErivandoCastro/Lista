#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

void calcular_media(struct Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
}

int main() {
    struct Aluno aluno;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &aluno.nota2);

    calcular_media(&aluno);

    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Média: %.2f\n", aluno.media);

    return 0;
}
