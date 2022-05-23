#include <stdio.h>
#include <math.h>

int main(){

    //Variaveis de entrada
    int numero;

    //Variavel de saida
    float soma;

    //Entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d",&numero);

    //Processamento
    soma = pow(numero, 1.0/3) + pow(numero, 1.0/4);

    //Imprimir resultado
    printf("Soma = %f\n",soma);
    
    return 0;
}