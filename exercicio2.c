#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto produtos[5];
    float precoTotal = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%49s", &produtos[i].nome);
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
    }

    for (int i=0; i < 5; i++) {
        precoTotal += produtos[i].preco * produtos[i].quantidade;
    }
    printf("\nProdutos cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Produto %d: %s, Preco: %.2f, Quantidade: %d\n", i + 1, produtos[i].nome, produtos[i].preco
, produtos[i].quantidade);
    }
    printf("\n");
    printf("Preco total dos produtos: %.2f\n", precoTotal);
    return 0;
}