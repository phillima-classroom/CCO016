#include <stdio.h>

int main(){

    //Variaveis de entrada
    int horaAulaMinistrada;

    //Variaveis de saída
    float ganhoTotal, gastoMaterial, lucro;

    //Entrada de dados
    printf("Digite a quantidade de horas de aula ministrada: ");
    scanf("%d",&horaAulaMinistrada);

    //Processamento
    ganhoTotal = horaAulaMinistrada*50;
    gastoMaterial = ganhoTotal*0.15;
    lucro = ganhoTotal - gastoMaterial;

    //Imprimir resultado
    printf("Ganho Total = %0.2f\n", ganhoTotal);
    printf("Gasto Material = %0.2f\n", gastoMaterial);
    printf("Lucro = %0.2f\n",lucro);

    return 0;
}