#include <stdio.h>

typedef struct {
    char nome[50];
    int codigo;
    float preco;
} Produto;

int main() {
    Produto produtos[5] = {
        {"Pão", 1, 5.00},
        {"Bolo", 2, 15.00},
        {"Torta", 3, 8.00},
        {"Croissant", 4, 12.00},
        {"Baguete", 5, 20.00}
    };

    printf("--- Produtos com preço superior a R$ 10.00 ---\n");
    for (int i = 0; i < 5; i++) {
        if (produtos[i].preco > 10.00) {
            printf("\nNome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Preço: R$ %.2f\n", produtos[i].preco);
        }
    }

    return 0;
}