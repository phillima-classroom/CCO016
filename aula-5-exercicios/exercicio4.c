#include <stdio.h>

int main(){

    //Variaveis de entrada
    int kmPercorrido, diasAluguel;

    //Variavel de saida
    float precoAgencia1, precoAgencia2;

    //Entrada de dados
    printf("Digite quantos KM irá percorrer: ");
    scanf("%d",&kmPercorrido);

    printf("Digite por quantos dias irá alugar o carro: ");
    scanf("%d",&diasAluguel);    

    //Processamento
    precoAgencia1 = 62*diasAluguel + 1.4*kmPercorrido;
    precoAgencia2 = 80*diasAluguel + 1.2*kmPercorrido;

    //Imprimir resultado
    printf("Agencia 1 = %0.2f, Agência 2 = %0.2f\n",precoAgencia1,precoAgencia2);
    

    return 0;
}