#include <stdio.h>


int main(){
    int tam = 10;
    float numeros[tam];
    float numerosQuadrado[tam];
    int cont;
    
    //entrada das notas
    cont = 0;
    while(cont < tam){
        printf("Digite um numero real na posicao %d: ", cont+1);
        scanf("%f", &numeros[cont++]);
    }
    
    cont = 0;
    while(cont < tam){
        numerosQuadrado[cont] = numeros[cont] * numeros[cont];
        cont++;
    }

    cont = 0;
    while(cont < tam){
        printf("Original = %0.2f, Quadrado = %0.2f\n", numeros[cont],numerosQuadrado[cont]);
        cont++;
    }

    puts("");

    

    return 0;
}