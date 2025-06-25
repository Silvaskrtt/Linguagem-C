#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    // Função soma
    float soma(float vetnum[2]){
        float resultSoma;
        resultSoma = vetnum[0]+vetnum[1];
        return(resultSoma);
    }

    int main(){

        // Declarando Variaveis
        float vetnum[2], resultSoma;
        int pos;

        // Mensagem de bem-vindo
        printf("----------------- Bem-Vindo ao seu somador ----------------\n");
        Sleep(3000);
        system("cls");

        // Solicitando valores ao usuário
        for(pos = 0; pos < 2; pos++){
            printf("Insira o %d numero da soma: ", pos+1);
            scanf(" %f",&vetnum[pos]);
        }

        // Imprimindo o resultado
        resultSoma = soma(vetnum);
        printf("Resultado da soma = %.2f", resultSoma);
        return 0;
    }
