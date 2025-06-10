#include <stdio.h>

typedef struct {
    char alunoNome[50];
    int alunoIdade;
    float alunoIMC;
} Aluno;

void classificarAluno(Aluno aluno) {
    printf("\n--- Classificação do Aluno ---\n");
    printf("Nome: %s\n", aluno.alunoNome);
    printf("Idade: %d anos\n", aluno.alunoIdade);
    printf("IMC: %.2f\n", aluno.alunoIMC);

    if (aluno.alunoIMC >= 30) {
        printf("Classificação: Obeso\n");
    } else if (aluno.alunoIMC >= 25) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Saudável\n");
    }
}

int main() {
    Aluno aluno;
    printf("\n--- Bem vindo a Academia Corpo em Movimento ---\n");
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.alunoNome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.alunoIdade);
    printf("Digite o IMC do aluno: ");
    scanf("%f", &aluno.alunoIMC);

    classificarAluno(aluno);
    return 0;
}


