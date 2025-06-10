#include <stdio.h>

typedef struct {
    char tipo[20];
    char nome[50];
    int idade;
} Animal;

void exibirAnimaisVelhos(Animal animais[], int tamanho) {
    printf("\n--- Animais com mais de 5 anos ---\n");
    for (int i = 0; i < tamanho; i++) {
        if (animais[i].idade > 5) {
            printf("Nome: %s\n", animais[i].nome);
            printf("Tipo: %s\n", animais[i].tipo);
            printf("Idade: %d anos\n\n", animais[i].idade);
        }
    }
}

int main() {
    Animal animais[6];

    for (int i = 0; i < 6; i++) {
        printf("\n--- Bem vindo ao Pet Shop Amigo Fiel ---\n");
        printf("\nDigite o tipo do animal %d: ", i + 1);
        scanf(" %[^\n]", animais[i].tipo);
        printf("Digite o nome do animal %d: ", i + 1);
        scanf(" %[^\n]", animais[i].nome);
        printf("Digite a idade do animal %d: ", i + 1);
        scanf("%d", &animais[i].idade);
        getchar(); 
    }

    exibirAnimaisVelhos(animais, 6);

    return 0;
}
