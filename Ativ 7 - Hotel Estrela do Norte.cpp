#include <stdio.h>

int main() {
    
    int ocupacao[10];
    int ocupados = 0;
    float taxaOcupacao;

    printf("--== Hotel Estrela do Norte ==--\n\n");

    for (int i = 0; i < 10; i++) {
        
        printf("O quarto %d está ocupado? (1 - Sim / 2 - Não): ", i + 1);
        scanf("%d", &ocupacao[i]);

        if (ocupacao[i] == 1) {
        ocupados++;
        }
    }

    taxaOcupacao = (ocupados / 10.0) * 100;
    printf("\nA taxa de ocupação é de: %.2f\n", taxaOcupacao);

    return 0;
}