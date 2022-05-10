#include <stdio.h>

int main(){

    //Variáveis de entrada
    int idade;

    char ensinoMedioCompleto; //s para sim ou n para não

    printf("Digite a idade do(a) candidato(a): ");
    scanf("%d", &idade);
    fflush(stdin);
    printf("Possui ensino médio completo? (Digite 's' ou 'n') ");
    scanf("%c",&ensinoMedioCompleto);

    if(ensinoMedioCompleto == 's' && idade > 20){
        puts("O(a) candidato(a) está apto.");
    }

    return 0;

}