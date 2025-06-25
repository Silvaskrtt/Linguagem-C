#include <stdio.h>

    int main() {
        //Declarando variaveis
        int numeros[3] = {10, 20, 30};

        printf("Nos proximos segundos voce ira ver 3 numeros impressos\n");
        

        for(int i = 0; i < 3; i++){
            printf(" %d\n", numeros[i]);
        }

        return 0;
    }
