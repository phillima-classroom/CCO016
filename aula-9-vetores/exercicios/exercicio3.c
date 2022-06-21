#include <stdio.h>


int main(){
    int tam = 8;
    int numeros[tam];
    int x,y;
    int cont;
    int soma;
    
    //entrada de X
    do{
        printf("Digite um numero inteiro na posicao X: ");
        scanf("%d", &x);
    }while(x < 0 || x > tam-1);
    
    //entrada de y
    do{
        printf("Digite um numero inteiro na posicao Y: ");
        scanf("%d", &y);
    }while(y < 0 || y > tam-1);

    //entrada dos dados
    cont = 0;
    while(cont < tam){
        printf("Digite um número para posição %d: ", cont);
        scanf("%d", &numeros[cont++]);
    }
    
    soma = numeros[x] + numeros[y];
    printf("A soma dos elementos das posições numeros[%d] + numeros[%d] = %d\n", x,y,soma);
   

    return 0;
}