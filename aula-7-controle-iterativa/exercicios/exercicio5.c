#include <stdio.h>

int main(){

    //Variavel de entrada
    int n;

    //Variavel para Processamento
    int contador = 0; 
    float acumulador = 0;

    //Variavel de saída
    float media;

    printf("Digite um inteiro positivo N: ");
    scanf("%d",&n);

    while(n >= 0){
        acumulador += n;
        contador++;
        printf("Digite outro inteiro positivo N: ");
        scanf("%d",&n);
    }

    media = acumulador/contador;
    printf("Media = %0.1f\n",media);


    return 0;
}