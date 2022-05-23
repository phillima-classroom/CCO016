#include <stdio.h>

int main(){

    //Variaveis de entrada
    int num1,num2;

    //Variavel de saida
    int restoDivisao;

    //Entrada de dados
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d",&num1,&num2);

    //Processamento
    restoDivisao = num1 % num2;  
        
    //Imprimir resultado
    printf("Resto da divisao = %d\n", restoDivisao);

    
    return 0;
}