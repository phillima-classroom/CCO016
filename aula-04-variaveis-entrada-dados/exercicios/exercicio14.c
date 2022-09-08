#include <stdio.h>

int main(){

    printf("Digite o valor do produto: ");
    float valorProduto;
    scanf("%f",&valorProduto);

    float valorComDesconto = valorProduto * 0.88;
    
    printf("Valor final com desconto: %0.2f\n",valorComDesconto);


    return 0;
}