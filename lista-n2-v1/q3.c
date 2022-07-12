#include <stdio.h>

int main(){

    int numProdutos;
    float menorPreco;
    float precoTotal = 0;

    printf("Digite o total de produtos que irá comprar: ");
    scanf("%d",&numProdutos);

    float precoProdutos[numProdutos];
    for(int i = 0; i < numProdutos; i++){
        printf("Digite o preço do produto na posição %d: ",i);
        scanf("%f",&precoProdutos[i]);
        precoTotal+= precoProdutos[i];
    }

    for(int i = 0; i < numProdutos; i++)
        printf("%.2f ",precoProdutos[i]);
    puts("");
    if(numProdutos >= 5){
        //Buscar o menor preço
        menorPreco = precoProdutos[0];
        for(int i = 1; i < numProdutos; i++){
            if(precoProdutos[i] < menorPreco)
                menorPreco = precoProdutos[i];
        }
        printf("Valor Menor Produto = %0.2f\n",menorPreco);
        printf("Preço final com desconto: %0.2f - %0.2f = %0.2f\n",precoTotal,menorPreco,precoTotal-menorPreco);
    }else{
        printf("Preço total = %0.2f\n",precoTotal);
        puts("Compra sem direito a desconto");
    }

    return 0;
}