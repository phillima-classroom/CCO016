#include <stdio.h>

int main(){

    //Variaveis de entrada
    float valorProduto, porcenDesconto;

    //Variavel de saida
    float valorAVista, valorDesconto;

    printf("Digite o valor do produto: ");
    scanf("%f",&valorProduto);

    printf("Digite o valor do desconto: ");
    scanf("%f",&porcenDesconto);

    //Processamento
    valorDesconto = valorProduto * porcenDesconto/100;
    valorAVista = valorProduto - valorDesconto;

    //Imprimir resultado
    printf("Valor a vista  = R$ %0.2f. Valor Desconto = R$ %0.2f\n", valorAVista, valorDesconto);
    

    return 0;
}