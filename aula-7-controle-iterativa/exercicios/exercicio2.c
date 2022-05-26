#include <stdio.h>

int main(){

    //Variavel de entrada
    int n;

    //Variavel para Processamento
    int contador;

    printf("Digite um inteiro positivo: ");
    scanf("%d",&n);

    for(contador = 1; contador <= n*2 ; contador+=2){
        printf("%d ",contador);
    }
    printf("\n");


    return 0;
}