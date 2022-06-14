#include <stdio.h>


int main(){

    int vetorA[6], vetorB[6];
    int contA, contB;

    //Preenchendo o vetor A
    contA = 0;
    while(contA < 6){
        printf("Digite um numero inteiro na posicao %d do Vetor A ", contA+1);
        scanf("%d", &vetorA[contA++]);
    }
    
     //Preenchendo o vetor B
    contB = 0;
    while(contB < 6){
        printf("Digite um numero inteiro na posicao %d do Vetor B ", contB+1);
        scanf("%d", &vetorB[contB++]);
    }

    //buscando elementos iguais no Vetor A e Vetor B
    contA = 0;
    
    while(contA < 6){
        contB = 0;
        while(contB < 6){
            if(vetorA[contA]==vetorB[contB]){
                printf("%d ", vetorA[contA]);
            }
            contB++;
        }
        contA++;
    }
    puts("");

    return 0;
}