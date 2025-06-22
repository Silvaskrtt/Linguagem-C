#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    int main(){

        // Declarando Variaveis
        double vetnum[2], num;
        int pos;

        // Mensagem de boas vidas, comandos para esperar 3s e limpar a tela
        printf("--------- Bem-Vindo ao Comparador de Numeros! ---------\n");
        Sleep(3000);
        system("cls");

        // Entrada dos Numeros a serem comparadaos
        printf("Por favor, digite os 2 numeros a serem comparados!\n");

        // Loop para perguntar varias vezes
        for(pos = 0; pos < 2; pos++){
            printf("Insira o %d numero: ", pos+1);
            scanf(" %lf", &vetnum[pos]);
        }
        
        // Após o termino do loop esse comando irá limpar
        system("cls");

        // Imprir o resultado
        if(vetnum[0] > vetnum[1]){
            printf("O numero %lf e maior que o %lf", vetnum[0], vetnum[1]);
        }else if(vetnum[1] > vetnum[0]){
            printf("O numero %lf e maior que o %lf", vetnum[1], vetnum[0]);
        }else{
            printf("O numero %lf e igual ao %lf!", vetnum[1], vetnum[0]);
        }
            return 0;
    }