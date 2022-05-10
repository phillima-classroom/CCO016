#include <stdio.h>

int main(){

    //Variáveis de entrada
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if(numero <= 10 || numero >= 20){
        puts("Valor está no intervalo <= 10 ou >= 20.");
    }
    return 0;

}