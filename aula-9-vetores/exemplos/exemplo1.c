#include <stdio.h>


int main(){
    //para efeitos didáticos, 10 já é suficiente
    float notas[10];
    int cont;
    float media;

    //entrada das notas
    cont = 0;
    while(cont < 10){
        printf("Digite a nota %d: ", cont+1);
        scanf("%f", &notas[cont++]);
    }
    
    //calculo da media
    cont = 0;
    media = 0;
    while(cont < 10){
        media += notas[cont++];
    }
    media /= 10;

    //Imprimindo valores > que a media
    cont = 0;
    while(cont < 10){
        if(notas[cont] > media){
            printf("%0.2f ", notas[cont]);
        }
        cont++;
    }
    puts("");

    

    return 0;
}