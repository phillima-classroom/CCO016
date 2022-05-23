#include <stdio.h>

int main(){

    //Variaveis de entrada
    float custoFabrica;

    //Variavel de saida
    float custoFinal;

    //Entrada de dados
    printf("Digite o custo de fábrica: ");
    scanf("%f",&custoFabrica);

    //Processamento
    custoFinal = custoFabrica + custoFabrica*0.28 + custoFabrica*0.45;
    
    //Imprimir resultado
    printf("Custo Final = %0.2f\n",custoFinal);
    
    return 0;
}