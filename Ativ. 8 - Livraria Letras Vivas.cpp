#include <stdio.h>

typedef struct {
    char nome[50];
    int anoPublicacao;
} Livro;

int main() {
    Livro livros[8];

    for (int i = 0; i < 8; i++) {
        printf("Digite o nome do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].nome);
        printf("Digite o ano de publicação do livro %d: ", i + 1);
        scanf("%d", &livros[i].anoPublicacao);
        getchar(); 
    }

    printf("\n--- Livros publicados antes de 2000 ---\n");
    for (int i = 0; i < 8; i++) {
        if (livros[i].anoPublicacao < 2000) {
            printf("Nome: %s\n", livros[i].nome);
            printf("Ano de Publicação: %d\n\n", livros[i].anoPublicacao);
        }
    }

    return 0;
}
