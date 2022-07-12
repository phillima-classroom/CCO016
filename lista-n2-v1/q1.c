#include <stdio.h>

int main(){

    int t;
    printf("Digite um número inteiro T: ");
    scanf("%d",&t);

    int vetor[t];
    int vetor2[t];
    for(int i = 0; i < t; i++){
        printf("Digite um número na posição %d: ",i);
        scanf("%d",&vetor[i]);
        vetor2[i] = vetor[i]*3;
    }

    for(int i = 0; i < t; i++)
        printf("%4d ",vetor[i]);
    puts("");
    for(int i = 0; i < t; i++)
        printf("%4d ",vetor2[i]);
    puts("");
    return 0;
}