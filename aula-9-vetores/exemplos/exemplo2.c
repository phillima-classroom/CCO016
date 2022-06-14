#include <stdio.h>


int main(){

    int numeros[8];
    int cont;

    cont = 0;
    while(cont < 8){
        printf("Digite um numero inteiro na posicao %d: ", cont+1);
        scanf("%d", &numeros[cont++]);
    }
    
    //Buscando os numeros pares
    cont = 0;
    while(cont < 8){
        if(numeros[cont]%2==0){
            printf("%d ",numeros[cont]);
        }
        cont++;
    }
    puts("");

    

    return 0;
}