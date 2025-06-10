#include <stdio.h>

int main() {
    int filmes;

    do {
        printf("\n---== Locadora Video Boom ==---\n");
        printf("\nQuantos filmes deseja alugar? (1 a 5): ");
        scanf("%d", &filmes);

        if (filmes < 1 || filmes > 5)
        {
        printf("\nNúmero inválido! Favor, escolha entre 1 e 5.\n");
        }

    } while (filmes < 1 || filmes > 5);

    printf("\nVocê escolheu alugar %d filmes!\n", filmes);

    return 0;
}
