#include <stdio.h>
#include <math.h>

int main(){
    
    //Processamento
    int cont;

    //Variavel de saida
    int somatório;

    for(cont = 0; cont <= 100; cont += 2){
        somatório += cont;
    }
   
    printf("Resultado da soma dos pares = %d\n",somatório);
    return 0;
}