#include <stdio.h>

int main(){

    printf("Digite a temperatura em Fahrenheit: ");
    float temperaturaF;
    scanf("%f",&temperaturaF);

    //Convertendo para Celsius
    float temperaturaC = (temperaturaF-32)/1.8;

    printf("Temperatura em Celsius = %f\n",temperaturaC);
    return 0;
}