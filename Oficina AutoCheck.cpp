#include <stdio.h>

typedef struct {
    char marca[30];
    int ano;
    float km;
} Carro;

int main() {
    Carro carros[5];
    int numCarros = 0;
    
     printf("--== Registro de Carros para Revisão ==--\n");

    while (numCarros < 5) {
       
        printf("\nCarro %d\n", numCarros + 1);
        printf("Marca: ");
        scanf("%s", carros[numCarros].marca);
        printf("Ano: ");
        scanf("%d", &carros[numCarros].ano);
        printf("Quilometragem: \n");
        scanf("%f", &carros[numCarros].km);
        numCarros++;
    }

    printf("\n--== Carros com mais de 100.000 km rodados ==--\n");
    for (int i = 0; i < numCarros; i++) {
        if (carros[i].km > 100000) {
            printf("Marca: %s\n", carros[i].marca);
            printf("Ano: %d\n", carros[i].ano);
            printf("Quilometragem: %.2f km\n\n", carros[i].km);
        }
    }

    return 0;
}
