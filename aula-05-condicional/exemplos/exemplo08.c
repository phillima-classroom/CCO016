#include <stdio.h>

int main(){

    //Variáveis de entrada
    float nota;

    printf("Digite a nota do(a) aluno(a): ");
    scanf("%f", &nota);

    if(nota >= 9.0 && nota <= 10.0){
        printf("Conceito A\n");
    }else if(nota >= 8.0 && nota < 9.0) {
        printf("Conceito B\n");
    }else if(nota >= 6.0 && nota < 8.0) {
        printf("Conceito C\n");
    }else if(nota >= 5.0 && nota < 6.0) {
        printf("Conceito D\n");
    }else if(nota >= 0.0 && nota < 5.0) {
        printf("Conceito E\n");
    }
    return 0;

}