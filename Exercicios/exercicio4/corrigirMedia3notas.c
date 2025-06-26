#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

    float media(float vetmed[3]){
        float resultMedia;
        resultMedia = (vetmed[0]+vetmed[1]+vetmed[2])/3;
        return(resultMedia);
    }

    int main(){

        //Declarando variaveis
        float resultMedia, vetmed[3];
        int pos;

        //Pedindo as notas para o aluno
        for(pos = 0; pos < 3; pos++){
            printf("Digite a %d nota: ", pos+1);
            scanf(" %f", &vetmed[pos]);
        }

        resultMedia = media(vetmed);
        printf("Sua media anual = %.2f", resultMedia);
        
         return 0;
    }
