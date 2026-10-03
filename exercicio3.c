#include <stdio.h>
#include <stdlib.h>

void prencherArray(int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int main() {
    printf("Digite o tamanho do array: ");
    int tamanho;
    scanf("%d", &tamanho);
    int *array = (int *)malloc(tamanho * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    prencherArray(array, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: %d\n", i + 1, array[i]);
    }
    
    free(array);
    array = NULL; // Evita ponteiro pendente

    return 0;
}