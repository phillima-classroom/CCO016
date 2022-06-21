#include <stdio.h>


int main(){
    int tam = 10;
    int numeros[tam];
    int maior,menor;
    int posicaoMaior,posicaoMenor;
    int cont;
    
    //entrada dos dados
    cont = 0;
    while(cont < tam){
        printf("Digite um número para posição %d: ", cont);
        scanf("%d", &numeros[cont++]);
    }

    menor = numeros[0];
    maior = numeros[0];
    posicaoMaior = 0;
    posicaoMenor = 0;
    
    //Encontrando o maior elemento
    cont = 1; 
    while(cont < tam){
        if(numeros[cont] > maior){
            maior = numeros[cont];
            posicaoMaior = cont;
        }
        if(numeros[cont] < menor){
            menor = numeros[cont];
            posicaoMenor = cont;
        }
        cont++;
    }
    
    printf("Maior Elemento = %d, na posição %d\n",maior,posicaoMaior);
    printf("Menor Elemento = %d, na posição %d\n",menor,posicaoMenor);

    return 0;
}