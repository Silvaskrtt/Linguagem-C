#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

    float media(float vetmed[3]){
        float resultMedia;
        resultMedia = (vetmed[0]+vetmed[1]+vetmed[2]/3);
        return(resultMedia);
    }

    int main(){

        //Declarando variaveis
        float resultMedia;

        //Pedindo as notas para o aluno
        
        
        printf("Media: %.1f\n", media);
        return;
    }
