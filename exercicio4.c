#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int capacidade = 3;
    array = (int *)malloc(capacidade * sizeof(int));

    int numero;
    int tamanho = 0;
    while (1) {
        printf("Digite um numero (ou -1 para sair): ");
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        // Verifica se o array precisa ser redimensionado
        
        if (tamanho >= capacidade) {
            capacidade *= 2;
            int *novoArray = (int *)realloc(array, capacidade * sizeof(int));
            if (array == NULL) {
                printf("Erro ao realocar memoria.\n");
                return 1;
            }
            array = novoArray;
        }

        array[tamanho] = numero;
        tamanho++;
    }
    printf("Numeros digitados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Capacidade final do array: %d\n", capacidade);

    free(array);
    array = NULL;
    return 0;
}