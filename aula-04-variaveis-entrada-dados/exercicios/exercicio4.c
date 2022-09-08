#include <stdio.h>
#include <math.h>

int main(){

    printf("Digite um número real: ");
    float valor1;
    scanf("%f",&valor1);
    float quadrado = valor1*valor1;
    float cubo = pow(valor1,3);

    printf("Quadrado de %0.2f = %0.2f\n",valor1,quadrado);
    printf("Cubo de %0.2f = %0.2f\n",valor1,cubo);

    return 0;
}