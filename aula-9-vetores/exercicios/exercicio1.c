#include <stdio.h>


int main(){
    int numeros[8];
    int cont;

    cont = 0;
    while(cont < 8){
        printf("Digite um número para posição %d: ", cont+1);
        scanf("%d", &numeros[cont++]);
    }
    
    cont = 7;
    while(cont >= 0){
        printf("%d ",numeros[cont]);
        cont--;
    }

    puts("");

    

    return 0;
}