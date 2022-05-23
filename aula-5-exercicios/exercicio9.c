#include <stdio.h>

int main(){

    //Variaveis de entrada
    int idadeDias,idadeMeses,idadeAnos;

    //Variavel de saida
    int idadeDiasTotal;

    //Entrada de dados
    printf("Digite sua idade em anos, meses e dias:\n");
    scanf("%d %d %d",&idadeAnos,&idadeMeses,&idadeDias);

    //Processamento
    idadeDiasTotal = idadeAnos*365 + idadeMeses*30 + idadeDias;
    
    //Imprimir resultado
    printf("Idade Total Dias = %d\n",idadeDiasTotal);
    
    return 0;
}