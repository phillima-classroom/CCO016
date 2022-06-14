#include <stdio.h>

int main(){

    //Variavel de entrada
    int n;

    //Variavel para Processamento
    int contador;

    //Variavel de saída
    float soma = 0;

    printf("Digite um inteiro positivo N: ");
    scanf("%d",&n);

    for(contador = 0; contador < n ; contador++){
        soma += ((contador*2.0)+1)/(contador+1);
    }
    printf("Soma = %0.3f\n",soma);


    return 0;
}