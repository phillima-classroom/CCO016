#include <stdio.h>

int main(){

    //Variavel de entrada
    int n;

    //Variavel para Processamento
    int contador;

    printf("Digite um inteiro positivo: ");
    scanf("%d",&n);

    for(contador = n; contador > 0 ; contador--){
        printf("%d ",contador);
    }
    printf("\n");


    return 0;
}