#include <stdio.h>


int main(){

    float numeros[10];
    int cont;
    float media;

    cont = 0;
    while(cont < 10){
        printf("Digite um numero real na posicao %d: ", cont+1);
        scanf("%f", &numeros[cont++]);
    }
    
    //calculando a media
    cont = 0;
    media = 0;
    while(cont < 10){
       media += numeros[cont++];
    }
    media /= 10;
    printf("Media: %f",media);
    puts("");

    

    return 0;
}