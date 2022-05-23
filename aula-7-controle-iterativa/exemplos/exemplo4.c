#include <stdio.h>
#include <math.h>

int main(){
 
    //Processamento
    int cont;
    //Variavel de saida
    int potencia;

    cont = 1;
    
    //enquanto
    while(pow(cont,5) < 10000){
        cont++; 
    }

    printf("Potencia de 5 > 10000 = %d\n",cont);

    return 0;
}