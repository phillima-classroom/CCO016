#include <stdio.h>

int main(){

    printf("Digite três valores: \n");
    float valor1,valor2,valor3;
    scanf("%f %f %f",&valor1,&valor2,&valor3);

    float resultado = valor1*valor1 + valor2*valor2 + valor3*valor3;
    printf("A soma de seus quadrados é: %f\n",resultado);
    
    return 0;
}