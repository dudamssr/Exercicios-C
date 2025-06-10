#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    
    printf("--- Bem Vindo a Cafeteria Café com Letras ---\n");

    for (int i = 0; i < 7; i++) {
        printf("De 0 a 10, digite uma nota de avaliação pelo atendimento %d: ", i + 1);
        scanf("%f", &nota);
        while (nota < 0 || nota > 10) {
            printf("Nota inválida. Digite uma nota entre 0 e 10: ");
            scanf("%f", &nota);
        }
        soma += nota;
    }

    media = soma / 7;

    printf("Média das notas: %.2f\n", media);
    if (media >= 8) {
        printf("Avaliação: Boa\n");
    } else if (media >= 5) {
        printf("Avaliação: Razoável\n");
    } else {
        printf("Avaliação: Ruim\n");
    }

    return 0;
}
