#include <stdio.h>
#include <string.h>

struct Professor {
    char nome[50];
    char departamento[50];
    int idade;
};

struct Disciplina {
    char nome[50];
    int codigo;
    int creditos;
    struct Professor prof;
};

int main() {
    struct Professor professor1;
    strcpy(professor1.nome, "Cláudio");
    strcpy(professor1.departamento, "Física");
    professor1.idade = 40;

    struct Disciplina disciplina1;
    strcpy(disciplina1.nome, "Cálculo I");
    disciplina1.codigo = 101;
    disciplina1.creditos = 4;
    disciplina1.prof = professor1;

    printf("Disciplina: %s\n", disciplina1.nome);
    printf("Código: %d\n", disciplina1.codigo);
    printf("Créditos: %d\n", disciplina1.creditos);
    printf("Professor: %s\n", disciplina1.prof.nome);
    printf("Departamento: %s\n", disciplina1.prof.departamento);
    printf("Idade do professor: %d\n", disciplina1.prof.idade);

    return 0;
}
