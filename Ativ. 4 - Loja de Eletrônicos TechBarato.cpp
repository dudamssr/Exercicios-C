#include <stdio.h>
#include <stdlib.h>

int main() {
    float precos[10];
    float maisCaro, maisBarato;

    for (int i = 0; i < 10; i++) {
        printf("Digite o preço do produto %d: R$ ", i + 1);
        scanf("%f", &precos[i]);

        if (i == 0) {
            maisCaro = precos[i];
            maisBarato = precos[i];
        } else {
            if (precos[i] > maisCaro) maisCaro = precos[i];
            if (precos[i] < maisBarato) maisBarato = precos[i];
        }
    }

    printf("\nProduto mais caro: R$ %.2f\n", maisCaro);
    printf("Produto mais barato: R$ %.2f\n", maisBarato);

    return 0;
}
