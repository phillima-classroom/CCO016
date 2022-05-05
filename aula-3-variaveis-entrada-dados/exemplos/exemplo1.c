#include <stdio.h>

int main(){

    printf("Digite um valor inteiro: ");
    int valor1;
    scanf("%d",&valor1);

    printf("Digite um valor real: ");
    float valor2;
    scanf("%f",&valor2);

    float resultado = valor1 * valor2;
    printf("O produto de %d e %0.2f = %0.2f\n",valor1,valor2,resultado);

    return 0;
}