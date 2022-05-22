#include <stdio.h>

int main(){

    float precoAntigo, precoNovo;

    printf("Digite o preco do produto: ");
    scanf("%f",&precoAntigo);
    
    //calcula preco novo
    if(precoAntigo <= 50){
        precoNovo = precoAntigo * 1.2;
    }else if(precoAntigo > 50 && precoAntigo <= 100){
        precoNovo = precoAntigo * 1.15;        
    }else if(precoAntigo > 100 && precoAntigo <= 200){
        precoNovo = precoAntigo * 1.12;
    }else{
        precoNovo = precoAntigo * 1.08;
    } 
    
    //emite a mensagem
    if(precoNovo <= 80){
        printf("Preco Novo = %0.2f\n",precoNovo);
        printf("Baratinho!\n");
    }else if(precoNovo > 80 && precoNovo <= 120){
        printf("Preco Novo = %0.2f\n",precoNovo);
        printf("Preço normal!\n");
    }else if(precoNovo > 120 && precoNovo <= 250){
        printf("Preco Novo = %0.2f\n",precoNovo);
        printf("Caro!\n");
    }else{
        printf("Preco Novo = %0.2f\n",precoNovo);
        printf("Você é rico!\n");
    }
        
    return 0;

}