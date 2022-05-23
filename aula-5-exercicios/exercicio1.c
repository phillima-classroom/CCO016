#include <stdio.h>

int main(){

    //Variaveis de entrada
    float valorReal, cotacaoDolar;

    //Variavel de saida
    float valorConvertidoDolar;

    printf("Digite um valor em reais R$: ");
    scanf("%f",&valorReal);

    printf("Digite a cotação do dolar: ");
    scanf("%f",&cotacaoDolar);

    //Processamento
    valorConvertidoDolar = valorReal/cotacaoDolar;

    printf("Valor convertido para dólar ($): %0.2f\n",
    valorConvertidoDolar);
    

    return 0;
}