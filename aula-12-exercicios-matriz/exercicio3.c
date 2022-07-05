#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


int main(){
    
    time_t t;
    srand((unsigned) time(&t));

    int n;
    int contQuadP = 0;
    printf("Digite um tamanho para o vetor: ");
    scanf("%d",&n);
    
    int vetor[n];
    int vetorQuadP[n];

    for(int i = 0; i < n; i++){
        vetor[i] = (rand()%100)+1;
        float tempF = sqrt(vetor[i]);
        int tempI = tempF;
        if(tempF-tempI <= 0){
            vetorQuadP[contQuadP] = vetor[i];
            contQuadP++;
        }

    }


    for(int i = 0; i < n; i++){
        printf("%d ",vetor[i]);
    }
    puts("");
    if(contQuadP==0){
        puts("Não há quadrado perfeito no vetor original");
    }else{
        puts("Lista de Quadrado Perfeito");
        for(int i = 0; i < contQuadP; i++){
            printf("%d ",vetorQuadP[i]);
        }
    }
    
    puts("");

    return 0;
}