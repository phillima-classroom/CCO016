#include <stdio.h>

int main(){

    //Variáveis de entrada
    int idade;

    int ensinoMedioCompleto; //1 para sim ou 0 para não

    printf("Digite a idade do(a) candidato(a): ");
    scanf("%d", &idade);
    printf("Possui ensino medio completo? (Digite 1 para Sim ou 0 para Nao): ");
    scanf("%d",&ensinoMedioCompleto);

    if(ensinoMedioCompleto == 1 && idade > 20){
        printf("O(a) candidato(a) esta apto.\n");
    }else{
        printf("O(a) candidato(a) nao esta apto.\n");
    }

    return 0;

}