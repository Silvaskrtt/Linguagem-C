#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int capacidade = 2;  // capacidade inicial
    int tamanho = 0;     // número real de elementos inseridos
    int numero;

    vetor = (int *) malloc(capacidade * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite numeros inteiros (digite 'p' para parar):\n");

    while(1){
        printf("Numero %d: ", tamanho + 1);
        scanf("%d", &numero);

        if(numero == 'p')
            break;

        // Cresce o vetor se necessário
        if(tamanho == capacidade){
            capacidade *= 2;
            vetor = (int *) realloc(vetor, capacidade * sizeof(int));
            if (vetor == NULL) {
                printf("Erro ao realocar memoria.\n");
                return 1;
            }
        }

        vetor[tamanho] = numero;
        tamanho++;
    }

    // Mostra os elementos armazenados
    printf("\nVoce digitou:\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor); // Libera memória

    return 0;
}