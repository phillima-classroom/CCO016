#include <stdio.h>

int main(){

    int numD;
    float mediaGlobal = 0;
    float indice = 7.5;
    printf("Digite o total de disciplinas cursadas: ");
    scanf("%d",&numD);

    float notas[numD];
    for(int i = 0; i < numD; i++){
        printf("Digite a nota final da disciplina na posição %d: ",i);
        scanf("%f",&notas[i]);
    }

    for(int i = 0; i < numD; i++)
        mediaGlobal+=notas[i];
    mediaGlobal /= numD;

    for(int i = 0; i < numD; i++)
        printf("%0.2f ",notas[i]);
    printf("\nMédia Global = %0.2f\n",mediaGlobal);
    if(mediaGlobal >= indice)
        puts("Deferido");
    else
        puts("Indeferido");
    
    return 0;
}