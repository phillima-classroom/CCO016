#include <stdio.h>

int main(){

    //Variáveis de entrada
    char sexo;//m ou h
    int idade;
    float peso;
    
    printf("Digite o sexo do(a) doador(a). Digite 'h' ou 'm':  ");
    scanf("%c", &sexo);
    printf("Digite a idade do(a) doador(a): ");
    scanf("%d", &idade);
    printf("Digite o peso do(a) doador(a): ");
    scanf("%f", &peso);


    if(idade >= 18 && idade <= 65){
        if((sexo == 'h' && peso >= 50.0) ||
           (sexo == 'm' && peso >= 55.0)){
               printf("Apto a doar sangue!\n");
        }else{
            printf("Nao esta apto a doar sangue!\n");
        }  
    }else{
        printf("Nao esta apto a doar sangue!\n");
    }
    return 0;
}