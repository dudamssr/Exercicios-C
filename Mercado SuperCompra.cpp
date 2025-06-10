#include <stdio.h>

typedef struct {
    char nome[30];
    int quantidade;
    float preço;
} Produto;

int main() {
    Produto produtos[10];
    float totalEstoque = 0;

    printf("--== Mercado Super Compra ==--\n\n");

    for (int i = 0; i < 10; i++) {
    printf("Produto %d\n", i + 1);
    printf("Nome: ");
    scanf("%s", produtos[i].nome);
    printf("Quantidade: ");
    scanf("%d", &produtos[i].quantidade);
    printf("Preço: ");
    scanf("%f", &produtos[i].preço);

        totalEstoque += produtos[i].quantidade * produtos[i].preço;
        printf("----------------------\n");
    }

    printf("\nValor total do estoque: R$ %.2f\n", totalEstoque);

    return 0;
}
