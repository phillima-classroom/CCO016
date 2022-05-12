#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade: ");
    scanf("%d",&idade);

    if(idade == 4 || idade == 5){
        puts("Fraldinha");
    }else if(idade >= 6 && idade <=12){
        puts("Infantil");
    }else if(idade >= 13 && idade <=18){
        puts("Juvenil");
    }else if(idade > 18){
        puts("Adulto");
    }
        
    return 0;
}