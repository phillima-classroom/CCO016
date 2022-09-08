#include <stdio.h>

int main(){

    printf("Digite três (3) valores: \n");
    float valor1,valor2,valor3;
    scanf("%f %f %f",&valor1,&valor2,&valor3);
    float soma = valor1 + valor2 + valor3;
    printf("Soma dos valores: %f\n",soma);
    return 0;
}