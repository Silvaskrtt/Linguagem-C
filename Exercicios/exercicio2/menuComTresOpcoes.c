#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    // Função para somar
    float somar(float num1, float num2){
        float resultsoma;
        resultsoma = num1+num2;
        return(resultsoma);
    }

    // Função para subtrair
    float subtrair(float num1, float num2){
        float resultsub;
        resultsub = num1-num2;
        return(resultsub);
    }

    int main(){

        // Declarando variaveis
        float resultsoma, resultsub;
        int operadoes;

        printf("-------------- Bem-Vindo a sua calculadora simples! --------------");
        Sleep(3000);
        system("cls");

        printf("Por favor, selecione abaixo as operacoes que deseja fazer:\n 1. Adicao\n 2. Subtracao\n 3. Sair da Calculadora\n");
        printf("\nSelecione a opcao que deseja: ");
        scanf(" %d", &operadoes);

        while(operadoes != '1' || operadoes != '2' || operadoes != '3'){
            printf("Opcao invalida!! Por favor selecione novamente: ");
            scanf(" %d", &operadoes);
        }
        
        for(a)

    }