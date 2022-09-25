#include <stdio.h>

int main(){

    //Variáveis de entrada
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if(numero <= 10 || numero > 20){
        printf("Valor se encontra no intervalo <= 10 ou > 20.\n");
    }else{
        printf("Valor se encontra fora do intervalo <= 10 ou > 20.\n");
    }
    return 0;

}