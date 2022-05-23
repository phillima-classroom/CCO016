#include <stdio.h>

int main(){

    //Variaveis de entrada
    int lado1,lado2,lado3;

    //Variavel de saida
    float area;

    //Variavel processamento
    float semiPerimetro;

    //Entrada de dados
    printf("Digite o valor dos três lados de um triângulo:\n");
    scanf("%d %d %d",&lado1,&lado2,&lado3);

    //Processamento
    semiPerimetro = (lado1 + lado2 + lado3)/2;
    area = sqrt(semiPerimetro * (semiPerimetro-lado1)*(semiPerimetro-lado2)*(semiPerimetro-lado3));
    //Imprimir resultado
    printf("Area = %0.1f\n",area);
    
    return 0;
}