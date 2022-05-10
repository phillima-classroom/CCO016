#include <stdio.h>

int main(){

    //Variáveis de entrada
    float nota;

    printf("Digite a nota do(a) aluno(a) ");
    scanf("%f", &nota);

    if(nota >= 9.0 && nota <= 10.0){
        puts("Conceito A");
    }else if(nota >= 8.0 && nota < 9.0) {
        puts("Conceito B");
    }else if(nota >= 6.0 && nota < 8.0) {
        puts("Conceito C");
    }else if(nota >= 5.0 && nota < 6.0) {
        puts("Conceito D");
    }else if(nota >= 0.0 && nota < 5.0) {
        puts("Conceito E");
    }
    return 0;

}