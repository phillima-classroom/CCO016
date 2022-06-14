#include <stdio.h>


int main(){

    int numeros[10];
    int maior;
    int posicao;
    int cont;

    cont = 0;
    while(cont < 10){
        printf("Digite um numero inteiro na posicao %d: ", cont+1);
        scanf("%d", &numeros[cont++]);
    }
    
    //buscando o maior elemento
    cont = 0;
    maior = numeros[cont++]; //supondo que o primeiro é o maior
    while(cont < 10){
        if(numeros[cont] > maior){
            maior = numeros[cont];
            posicao = cont;
        }
        cont++;
    }
    printf("Maior numero: %d \n",maior);
    printf("Posicao: %d\n",posicao);    

    return 0;
}