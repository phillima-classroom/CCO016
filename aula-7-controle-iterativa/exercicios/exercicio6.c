#include <stdio.h>

int main(){

    //Variavel de entrada
    int n;

    //Variavel para Processamento
    int contador; 

    //Variavel de saída
    int quadradoSoma = 0, somaQuadrado = 0, diferenca;

    printf("Digite um inteiro positivo N: ");
    scanf("%d",&n);

    for(contador = 1; contador <= n; contador++){
        quadradoSoma += (contador);
        somaQuadrado += (contador*contador);
    }
    quadradoSoma = quadradoSoma*quadradoSoma;
    diferenca = quadradoSoma - somaQuadrado;
    printf("Diferenca: %d - %d = %d\n",quadradoSoma,somaQuadrado,diferenca);

    return 0;
}