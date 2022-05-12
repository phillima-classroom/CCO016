#include <stdio.h>

int main(){

    float nota1,nota2,media;

    printf("Digite duas notas: \n");
    scanf("%f %f",&nota1,&nota2);

    if(nota1 >= 0 && nota1 <= 10 && nota2 >=0 && nota2 <= 10){//Notas válidas
        puts("Notas válidas");
        media = (nota1+nota2)/2;
        printf("Média das notas = %0.2f\n", media);
    }else{//Número negativo
        puts("notas incorretas");
    }


    
    return 0;
}