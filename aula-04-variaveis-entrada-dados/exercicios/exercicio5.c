#include <stdio.h>
#include <math.h>

int main(){

    printf("Digite um número real: ");
    float valor1;
    scanf("%f",&valor1);
    float quintaParte = valor1/5;

    printf("Resposta: %0.2f\n",quintaParte);
    return 0;
}