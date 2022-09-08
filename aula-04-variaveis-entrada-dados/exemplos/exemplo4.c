#include <stdio.h>

int main(){

    printf("Digite o valor de um produto: ");
    float valorProduto;
    scanf("%f",&valorProduto);

    float valorComDesconto = valorProduto * 0.95;
    
    printf("O produto com valor %0.2f está saindo por %0.2f com 5%% de desconto.\n",valorProduto,valorComDesconto);

    return 0;
}