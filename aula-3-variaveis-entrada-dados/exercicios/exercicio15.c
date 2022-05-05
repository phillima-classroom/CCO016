#include <stdio.h>

int main(){

    printf("Digite a distância em km: ");
    float distancia;
    scanf("%f",&distancia);

    printf("Digite o tempo em horas: ");
    float tempoHoras;
    scanf("%f",&tempoHoras);

    float velocidadeMedia = distancia/tempoHoras;
    
    printf("Velocidade media: %0.2f km/h\n",velocidadeMedia);


    return 0;
}