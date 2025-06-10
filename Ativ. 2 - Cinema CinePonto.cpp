#include <stdio.h>

#define MAX_CLIENTES 100

typedef struct {
    int codigo, pontos;
} Cliente;

int main() {
    int opcao;
    int quantidadeClientes = 0;
    Cliente clientes[MAX_CLIENTES];

    do {
        printf("\n--- Menu CinePonto ---\n");
        printf("1. Cadastrar compra de ingressos\n");
        printf("2. Listar clientes e pontos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            if (quantidadeClientes < MAX_CLIENTES) {
            printf("\nDigite o código do cliente: ");
            scanf("%d", &clientes[quantidadeClientes].codigo);

            int quantidadeIngressos;
            printf("Digite a quantidade de ingressos comprados: ");
            scanf("%d", &quantidadeIngressos);

            clientes[quantidadeClientes].pontos = quantidadeIngressos * 10; 

            printf("\nCliente %d acumulou %d pontos.\n", clientes[quantidadeClientes].codigo, clientes[quantidadeClientes].pontos);
            quantidadeClientes++;
        
                
        } else {
            printf("\nLimite de clientes atingido!\n");
        }
        break;
            
            
            case 2:
                if (quantidadeClientes > 0) {
                printf("\n--- Clientes e Pontos ---\n");
                for (int i = 0; i < quantidadeClientes; i++) {
                printf("Cliente %d: %d pontos\n", clientes[i].codigo, clientes[i].pontos);
            }
                
            } else {
                printf("\nNenhum cliente cadastrado!\n");
            }
            break;
            
            case 3:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}
