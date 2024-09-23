#include <stdio.h>
#include <string.h>

// Define a struct to represent a product
typedef struct {
    int codigo;
    char descricao[50];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;

// Function to display the main menu
void displayMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: __\n");
    printf("----------------------------------------------------------------------\n");
}

// Function to handle option 1: Entrada de Produtos
void entradaDeProdutos(Produto produtos[], int *nProdutos) {
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produtos[*nProdutos].codigo);
    printf("Descrição: ");
    fgets(produtos[*nProdutos].descricao, 50, stdin);
    produtos[*nProdutos].descricao[strlen(produtos[*nProdutos].descricao) - 1] = '\0'; // remove newline character
    printf("Valor Unitário: ");
    scanf("%f", &produtos[*nProdutos].valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &produtos[*nProdutos].qtdEstoque);
    produtos[*nProdutos].valorEstoque = produtos[*nProdutos].valorUnitario * produtos[*nProdutos].qtdEstoque;
    printf("Valor Estoque: %.2f\n", produtos[*nProdutos].valorEstoque);
    int opcao;
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        (*nProdutos)++;
    }
}

int main() {
    Produto produtos[100]; // array to store products
    int nProdutos = 0; // number of products
    int opcao;
    do {
        displayMenu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                entradaDeProdutos(produtos, &nProdutos);
                break;
            case 2:
                // TO DO: implement list of products
                break;
            case 3:
                // TO DO: implement total value of stock
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}