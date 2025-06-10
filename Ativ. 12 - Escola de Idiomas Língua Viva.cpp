#include <stdio.h>

int main() {
	float notas[5][4];
	float media[5];

	printf("--- Bem Vindo(a) ao Língua Viva ---\n");

	for (int i = 0; i < 5; i++) {
		printf("\n--- Aluno %d ---\n", i + 1);
		float soma = 0;
		for (int j = 0; j < 4; j++) {
			printf("Digite a nota da prova %d: ", j + 1);
			scanf("%f", &notas[i][j]);
			soma += notas[i][j];
		}
		media[i] = soma / 4;
	}

	printf("\nResultados:\n");

	for (int i = 0; i < 5; i++) {
		printf("\n--- Aluno %d ---\n", i + 1);
		printf("Média final: %.2f\n", media[i]);
		if (media[i] >= 6) {
			printf("Situação: Aprovado\n\n");
		} else {
			printf("Situação: Reprovado\n\n");
		}
	}

	return 0;
}
