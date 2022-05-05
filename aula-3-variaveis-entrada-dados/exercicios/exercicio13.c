#include <stdio.h>

int main(){

    printf("Digite o ano de nascimento da pessoa: ");
    int anoNascimento;
    scanf("%d",&anoNascimento);

    printf("Digite o ano em que estamos: ");
    int anoAtual;
    scanf("%d",&anoAtual);

    float idadeAnos,idadeMeses,idadeDias;
    
    idadeAnos = anoAtual-anoNascimento;
    idadeMeses = idadeAnos*12;
    idadeDias = 365*idadeAnos;

    printf("Idade em anos %0.2f\n",idadeAnos);
    printf("Idade em meses %0.2f\n",idadeMeses);
    printf("Idade em dias %0.2f\n",idadeDias);

    return 0;
}