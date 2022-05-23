#include <stdio.h>

int main(){

    //Variaveis de entrada
    float cargaHoraria,faltasAcumuladas;

    //Variaveis de saída
    float porcentagemFaltas;

    //Entrada de dados
    printf("Digite a carga horaria do curso: ");
    scanf("%f",&cargaHoraria);

    printf("Digite a quantidade de faltas em horas: ");
    scanf("%f",&faltasAcumuladas);

    //Processamento
    porcentagemFaltas = (faltasAcumuladas/cargaHoraria)*100;

    //Imprimir resultado
    printf("Porcentagem Faltas = %0.2f %%\n", porcentagemFaltas);
    
    return 0;
}