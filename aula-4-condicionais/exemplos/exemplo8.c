#include <stdio.h>

int main(){

    //Variáveis de entrada
    char sexo;//m ou h
    int idade;
    float peso;
    

    printf("Digite a idade do(a) doador(a): ");
    scanf("%d", &idade);
    printf("Digite o peso do(a) doador(a): ");
    scanf("%f", &peso);
    fflush(stdin);
    printf("Digite o sexo do(a) doador(a). Digite 'h' ou 'm':  ");
    scanf("%c", &sexo);

    if(idade >= 18 && idade <= 65){
        if((sexo == 'h' && peso >= 50.0) ||
           (sexo == 'm' && peso >= 55.0)){
               puts("Apto a doar sangue!");
        }else{
            puts("Não está apto a doar sangue.");
        }  
    }else{
        puts("Não está apto a doar sangue.");
    }
    return 0;
}