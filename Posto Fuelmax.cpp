#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int tipoCombustivel;
    float litros, precoLitro, total;

    printf("--== Posto Fuelmax==--\n");
    printf("Escolha o tipo de combustível:\n");
    printf("1 - Gasolina\n");
    printf("2 - Etanol\n");
    printf("3 - Diesel\n");
    
    printf("Digite a opção: ");
    scanf("%d", &tipoCombustivel);

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litros);

    switch (tipoCombustivel) {
        
        case 1:
        precoLitro = 5.00;
        break;
        
        case 2:
        precoLitro = 4.00;
        break;
        
        case 3:
        precoLitro = 6.50; 
        break;
        
        default:
        printf("Opção inválida!\n");
        return 1;
    }

    total = litros * precoLitro;
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
