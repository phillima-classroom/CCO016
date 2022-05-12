#include <stdio.h>
#include <math.h>
int main(){

    int num;
    float resultado;

    printf("Digite um número inteiro: ");
    scanf("%d",&num);

    if(num > 0){//Número positivo
        puts("O valor digitado é positivo.");
        resultado = sqrt(num);
        printf("A raiz quadrado = %0.2f\n", resultado);
    }else{//Número negativo
        puts("O valor digitado é negativo.");
        resultado = pow(num,2);
        printf("O quadrado = %0.2f\n", resultado);
    }


    
    return 0;
}