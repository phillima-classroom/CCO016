#include <stdio.h>
#include <math.h>

int main(){

    //Variaveis de entrada
    float raio;

    //Variavel de saida
    float volume;

    //Entrada de dados
    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);

    //Processamento
    volume = (4*M_PI*pow(raio,3))/3;
    
    //Imprimir resultado
    printf("Volume = %f\n", volume);
    
    return 0;
}