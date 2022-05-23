#include <stdio.h>

int main(){

    //Variaveis de entrada
    int v1,v2;

    //Variavel de processamento
    int vTemp;

    //Entrada de dados
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d",&v1,&v2);

    //Processamento
    vTemp = v2;
    v2 = v1;
    v1 = vTemp;
    
    //Imprimir resultado
    printf("%d %d\n", v1,v2);
    
    return 0;
}