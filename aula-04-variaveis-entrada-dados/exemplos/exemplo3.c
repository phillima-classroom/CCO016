#include <stdio.h>

int main(){

    printf("Digite uma temperatura em Fahrenheit: ");
    float temperaturaF;
    scanf("%f",&temperaturaF);

    //Convertendo para Celsius
    float temperaturaC = (temperaturaF-32)/1.8;

    printf("A temperatura %0.2f F é equivalente a %0.2f C\n",temperaturaF,temperaturaC);
    return 0;
}