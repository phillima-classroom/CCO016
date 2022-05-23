#include <stdio.h>
#include <math.h>

int main(){
    
    //Processamento
    int cont;

    //Variavel de saida
    int somatório;

    for(cont = 0; cont <= 1000; cont++){
        if(cont % 3 == 0 || cont % 5 == 0){
            somatório += cont;
        }
    }
   
    printf("Resultado da soma dos múltiplos de 3 e 5 = %d\n",somatório);
    return 0;
}