#include <stdio.h>

int main(){

    //Variavel de entrada
    int n;

    //Variavel para Processamento
    int contador;

    //Variavel de saída
    float soma = 1;

    printf("Digite um inteiro positivo N: ");
    scanf("%d",&n);

    for(contador = 1; contador < n ; contador++){
        soma += ((contador*2.0)+1)/(contador+1);
        printf("%f\n",soma);
        
    }
    printf("Soma = %0.3f\n",soma);


    return 0;
}