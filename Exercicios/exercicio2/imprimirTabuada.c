#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    // Função taboada
    int taboada(int base, int mult){
        return base * mult; 
    }

    int main(){
        int resultTaboada, base, mult = 1, entramult;

        // Mensagem de boas vindas
        printf("------------ Bem-Vindo a Taboada ------------\n");
        Sleep(3000);
        system("cls");

        // Entrada
        printf("Digite o numero que deseja saber a taboada: ");
            scanf(" %d", &base);
        printf("Digite o numero ate onde deja multiplicar: ");
            scanf(" %d", &entramult);

        do{
           resultTaboada = taboada(base, mult);
           printf("%d x %d = %d\n", base, mult, resultTaboada);
           mult++; 
        }while(mult <= entramult);
            return 0;
    }