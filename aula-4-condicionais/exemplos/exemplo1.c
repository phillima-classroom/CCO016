#include <stdio.h>

int main(){

    float media;

    printf("Digite a média do aluno(a): ");
    scanf("%f",&media);

    if(media >= 6.0){
        puts("O aluno está aprovado!");
    }

    return 0;

}