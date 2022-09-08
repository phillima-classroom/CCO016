#include <stdio.h>

int main(){

    printf("Digite a temperatura em Celsius: ");
    float temperaturaC;
    scanf("%f",&temperaturaC);

    //Convertendo para Celsius
    float temperaturaF = (9.0/5 * temperaturaC) + 32;

    printf("Temperatura em Fahrenheit %f\n",temperaturaF);
    return 0;
}