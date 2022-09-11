#include <stdio.h>
#include <math.h>

int main(){

    printf("Digite um valor inteiro: ");
    int valor1;
    scanf("%d", &valor1);

    int resultado = pow(valor1,3);
    //Alternativa seria fazer: resultado = valor1*valor1*valor1

    printf("O valor %d elevado ao cubo = %d\n",valor1,resultado); 

    return 0;
}