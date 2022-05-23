#include <stdio.h>

int main(){

    //Variaveis de entrada
    float pesoCrianca;

    //Variavel de saida
    int qtdGotas;

    //Entrada de dados
    printf("Digite o peso da criança: ");
    scanf("%f",&pesoCrianca);

    //Processamento
    qtdGotas = 5 * (pesoCrianca/2);

    //Imprimir resultado
    printf("Quantidade de gotas = %d\n",qtdGotas);
    

    return 0;
}