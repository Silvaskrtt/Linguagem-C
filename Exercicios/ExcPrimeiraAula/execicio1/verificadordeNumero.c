#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    int main(){
        // Variaveis
        int num;

        // Mensagem de boas vindas
        printf("---------------- Seja Bem-Vindo ao verificador de numeros ----------------");
        Sleep(3000);
        system("cls");

        // Solicitando o número para o usuário
        printf("Insira o numero que deseja verificar: ");
        scanf(" %d", &num);

        // Verificanado se o numero é positivo, negativo ou Zero
        if(num > 0){
            printf("O numero %d e positivo!", num);
        }else if(num < 0){
            printf("O numero %d e negativo!", num);
        }else{
            printf("O numero que voce digitou e %d", num);
        }
            return 0;
    }