#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    int troca(int *num1, int *num2){
        int resultTroca = *num1;
        *num1 = *num2;
        resultTroca = *num2;
    }

    int main(){

        //Declarando as variaveis
        int num1, num2, resultTroca;

        //Recebendo os valores
        printf("Digite o 1 valor: ");
        scanf(" %d", &num1);

        printf("Digite o 2 valor: ");
        scanf(" %d", &num2);

        //Chamando a funcao troca
        resultTroca = troca(&num1, &num2);

        printf("Depois da troca, numero 1: %d\nnumero 2: %d", num1, num2);
    }