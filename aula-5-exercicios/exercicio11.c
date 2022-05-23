#include <stdio.h>
#include <math.h>

int main(){

    //Variaveis de entrada
    float raio,altura;

    //Variavel de saida
    float volume;

    //Entrada de dados
    printf("Digite o raio do cilindro: ");
    scanf("%f",&raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f",&altura);

    //Processamento
    volume = M_PI*raio*raio*altura;
    
    //Imprimir resultado
    printf("Volume = %f\n", volume);
    
    return 0;
}