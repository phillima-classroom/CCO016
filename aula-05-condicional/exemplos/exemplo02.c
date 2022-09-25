#include <stdio.h>

int main(){

    float media;

    printf("Digite a media do(a) aluno(a): ");
    scanf("%f",&media);

    if(media >= 6.0){
        printf("O(a) aluno(a) esta aprovado(a)!\n");
    }else{
        printf("O(a) aluno(a) esta reprovado(a)!\n");
    }

    return 0;

}