#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    int main(){
        //Declarando variaveis
        int *vetor;
        int num, pos;
        
        //Mensagem de bem-vindo
        printf("---------------------- Seja bem Vindo ----------------------");
        Sleep(3000);
        system("cls");

        //Solicitando entrada
        printf("Quantos numero deseja inserir? -> ");
        scanf(" %d", &num);

        //Alocando para varios numeros
        vetor = (int *) malloc(num * sizeof(int));

        if(vetor == NULL){
            printf("Erro em alocar memoria!");
            return 1;
        }

        //Inserindo valores no vetor
        for(pos = 0; pos < num; pos++){
            printf("Digite o valor %d: ", pos+1);
            scanf(" %d", &vetor[pos]);
        }

        //Exibindo valores do vetor
        printf("Valores que voce digitou -> ");
        for(pos = 0; pos < num; pos++){
            printf(" %d", vetor[pos]);
        }

        //Liberando a memória
        free(vetor);
        return 0;
    }