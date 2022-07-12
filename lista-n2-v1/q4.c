#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int tam = 10;
    
    int vetor1[tam];
    float vetor2[tam];
    srand(time(0));

    for(int i = 0; i < tam; i++){
        vetor1[i] = (rand()%100)+1;
        vetor2[i] = sqrt(vetor1[i]);
    }
    for(int i = 0; i < tam; i++)
        printf("%4d ",vetor1[i]);
    puts("");
    for(int i = 0; i < tam; i++)
        printf("%3.2f ",vetor2[i]);
    puts("");  

    return 0;
}