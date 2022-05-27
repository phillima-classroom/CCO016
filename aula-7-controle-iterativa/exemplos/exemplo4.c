#include <stdio.h>
#include <math.h>

int main(){
 
    //Processamento
    int cont;
 
    cont = 1;
    
    //enquanto
    while(pow(5,cont) < 10000){
        cont++; 
    }

    printf("Potencia de 5 > 10000 = %d\n",cont);

    return 0;
}