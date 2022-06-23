#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tam;
    int cont;

    printf("Digite um tamanho para o vetor (maximo 30): ");
    scanf("%d",&tam);
    
    int vetor[tam];
    srand(time(0));
    cont = 0;
    while(cont < tam){
        vetor[cont++] = rand()%101;
    }   
    cont = 0;
    while(cont < tam){
        printf("%d ",vetor[cont++]);
    }
    puts("");
 

    return 0;

}