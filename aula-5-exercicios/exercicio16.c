#include <stdio.h>

int main(){

    //Variaveis de entrada
    float num1,num2;

    //Entrada de dados
    printf("Digite o valor1 e valor 2:\n");
    scanf("%f %f",&num1,&num2);

    //Acumulando
    num1 = num1 + num2;

    printf("Digite o valor3:\n");
    scanf("%f",&num2);
    
    //Processamento
    num1 += num2;  
    num1 = num1/3;
    //Imprimir resultado
    printf("Media = %f\n", num1);
    
    return 0;
}