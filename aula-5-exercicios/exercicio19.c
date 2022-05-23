#include <stdio.h>

int main(){

    //Variaveis de entrada
    int qtdPecas;

    //Variaveis de saída
    int horas,minutos,segundo,tempoTotalSegundos;

    //Entrada de dados
    printf("Digite a quantidade de peças a serem produzidas: ");
    scanf("%d",&qtdPecas);

    //Processamento
    tempoTotalSegundos = qtdPecas*17;
    horas = tempoTotalSegundos/3600;
    minutos = tempoTotalSegundos/60;
    segundo = tempoTotalSegundos%60;

    //Imprimir resultado
    printf("%d horas, %d minuto e %d segundos.\n", horas,minutos,segundo);

    return 0;
}