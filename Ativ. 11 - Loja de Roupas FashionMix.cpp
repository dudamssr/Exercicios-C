#include <stdio.h>

int main() {
    int codigo;

    printf("--- Loja de Roupas FashionMix ---\n");
    printf("Escolha uma peça: \n");
    printf("1 - Camisa\n");
    printf("2 - Calça\n");
    printf("3 - Casaco\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Você escolheu Camisa.\n");
            printf("Preço: R$ 29,90.\n");
            break;
        case 2:
            printf("Você escolheu Calça.\n");
            printf("Preço: R$ 49,90.\n");
            break;
        case 3:
            printf("Você escolheu Casaco.\n");
            printf("Preço: R$ 99,90.\n");
            break;
        default:
            printf("Código inválido. Por favor, tente novamente.\n");
            break;
    }

    return 0;
}
