#include <stdio.h>

int main(){

    //Variaveis de entrada
    int idadeTotalDias;

    //Variavel de saida
    int idadeAnos,idadeMeses,idadeDias;

    //Entrada de dados
    printf("Digite sua idade em dias: ");
    scanf("%d",&idadeTotalDias);

    //Processamento
    idadeAnos = idadeTotalDias/365;
    idadeMeses = (idadeTotalDias%365)/30;
    idadeDias = (idadeTotalDias%365)%30;
    
    //Imprimir resultado
    printf("Idade = %d anos, %d meses e %d dias\n",idadeAnos,idadeMeses,idadeDias);
    
    return 0;
}