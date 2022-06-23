#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numMax;
    int cont;
    int numMagico;
    int tentativas = 0;
    int chute;

    printf("Digite um tamanho para o vetor (maximo 100): ");
    scanf("%d",&numMax);
    
    int vetorErros[numMax];
    srand(time(0));
    numMagico = rand()%(numMax+1);
    cont = 0;
    do{
        printf("Digite qual número eu pensei....");
        scanf("%d",&chute);
        if(chute==numMagico){
            puts("Parabens!");
            puts("Segue os valores que você chutou");
            cont = 0;
            while(cont < tentativas){
                printf("%d ",vetorErros[cont]);
                cont++;
            }
        } else if(chute < numMagico){
            printf("O número que pensei é maior que seu chute de %d \n", chute);
            tentativas++;
        } else{
            printf("O número que pensei é menor que seu chute de %d \n", chute);
            tentativas++;
        }
        vetorErros[cont++] = chute;
    }while (numMagico != chute);
    puts("");

    return 0;

}