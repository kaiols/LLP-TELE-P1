#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

typedef struct {
    int code;
    char description[50];
    float unitPrice;
    int stockQuantity;
} Product;

Product products[MAX_PRODUCTS];
int numProducts = 0;

void displayMenu() {
    printf("Menu:\n");
    printf("1. Cadastrar Produto\n");
    printf("2. Consultar Produto para Alteração\n");
    printf("3. Listar todos os produtos\n");
    printf("4. Exclusão do Produto\n");
    printf("Opção: ");
}

void registerProduct() {
    if (numProducts < MAX_PRODUCTS) {
        printf("Cadastrar Produto:\n");
        printf("Código: ");
        scanf("%d", &products[numProducts].code);
        printf("Descrição: ");
        scanf("%49s", products[numProducts].description);
        printf("Valor unitário: ");
        scanf("%f", &products[numProducts].unitPrice);
        printf("Quantidade em estoque: ");
        scanf("%d", &products[numProducts].stockQuantity);
        numProducts++;
        printf("Produto cadastrado com sucesso!\n");
    } else {
        printf("Erro: Limite de produtos alcançado.\n");
    }
}

void consultProduct() {
    int code;
    printf("Consultar Produto para Alteração:\n");
    printf("Código do produto: ");
    scanf("%d", &code);
    for (int i = 0; i < numProducts; i++) {
        if (products[i].code == code) {
            printf("Produto encontrado:\n");
            printf("Código: %d\n", products[i].code);
            printf("Descrição: %s\n", products[i].description);
            printf("Valor unitário: %.2f\n", products[i].unitPrice);
            printf("Quantidade em estoque: %d\n", products[i].stockQuantity);
            printf("Alterar dados? (s/n): ");
            char response;
            scanf(" %c", &response);
            if (response == 's') {
                printf("Novos dados:\n");
                printf("Código: ");
                scanf("%d", &products[i].code);
                printf("Descrição: ");
                scanf("%49s", products[i].description);
                printf("Valor unitário: ");
                scanf("%f", &products[i].unitPrice);
                printf("Quantidade em estoque: ");
                scanf("%d", &products[i].stockQuantity);
                printf("Dados alterados com sucesso!\n");
            }
            return;
        }
    }
    printf("Erro: Produto não encontrado.\n");
}

void listProducts() {
    printf("Listar todos os produtos:\n");
    for (int i = 0; i < numProducts; i++) {
        float stockValue = products[i].stockQuantity * products[i].unitPrice;
        printf("Produto %d:\n", i + 1);
        printf("Código: %d\n", products[i].code);
        printf("Descrição: %s\n", products[i].description);
        printf("Valor unitário: %.2f\n", products[i].unitPrice);
        printf("Quantidade em estoque: %d\n", products[i].stockQuantity);
        printf("Valor do estoque: %.2f\n", stockValue);
    }
}

void deleteProduct() {
    int code;
    printf("Exclusão do Produto:\n");
    printf("Código do produto: ");
    scanf("%d", &code);
    for (int i = 0; i < numProducts; i++) {
        if (products[i].code == code) {
            printf("Produto encontrado:\n");
            printf("Código: %d\n", products[i].code);
            printf("Descrição: %s\n", products[i].description);
            printf("Valor unitário: %.2f\n", products[i].unitPrice);
            printf("Quantidade em estoque: %d\n", products[i].stockQuantity);
            printf("Confirmar exclusão? (s/n): ");
            char response;
            scanf(" %c", &response);
            if (response == 's') {
                for (int j = i; j < numProducts - 1; j++) {
                    products[j] = products[j + 1];
                }
                numProducts--;
                printf("Produto excluído com sucesso!\n");
            }
            return;
        }
    }
    printf("Erro: Produto não encontrado.\n");
}

int main() {
    int option;
    do {
        displayMenu();
        scanf("%d", &option);
        switch (option) {
            case 1:
                registerProduct();
                break;
            case 2:
                consultProduct();
                break;
            case 3:
                listProducts();
                break;
            case 4:
                deleteProduct();
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (option != 0);
    return 0;
}