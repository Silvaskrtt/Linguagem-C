#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    int main(){

    printf("Iremos imprimir de 1 ate 20 ->");
    Sleep(3000);
        int pos;

        for(pos = 1; pos <= 20; pos++){
            printf(" %d", pos);
        }
        return 0;
    }