#include <stdio.h>

int main(){

    //Variavel de entrada
    int n,x;

    //Variavel para Processamento
    int contador;

    printf("Digite um inteiro positivo N: ");
    scanf("%d",&n);

    printf("Digite um inteiro positivo X: ");
    scanf("%d",&x);

    printf("Os %d primeiros números naturais mútiplos de %d são: ", n,x);
    for(contador = x; contador <= x*n ; contador+=x){
        printf("%d ",contador);
    }
    printf("\n");


    return 0;
}