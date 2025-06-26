#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *vetor = NULL;
    int capacidade = 2, tamanho = 0, numero;
    char entrada[20];

    vetor = malloc(capacidade * sizeof(int));
    if(!vetor){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite numeros inteiros (digite 'p' para parar):\n");
    while(1){
        printf("Numero %d: ", tamanho + 1);
        scanf("%s", entrada);

        if(strcmp(entrada, "p") == 0)
            break;

        numero = atoi(entrada);

        if(tamanho == capacidade) {
            capacidade *= 2;
            int *temp = realloc(vetor, capacidade * sizeof(int));
            if (!temp) {
                printf("Erro ao realocar memoria.\n");
                free(vetor);
                return 1;
            }
            vetor = temp;
        }

        vetor[tamanho++] = numero;
    }

    printf("\nVoce digitou:\n");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    free(vetor);
    return 0;
}