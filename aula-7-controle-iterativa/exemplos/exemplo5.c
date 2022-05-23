#include <stdio.h>
#include <math.h>

int main(){
    //Variavel de entrada
    float raio;
    
    //Variavel de saida
    float area;

    do{
        printf("Digite um raio. Não pode ser menor ou igual a zero: ");
        scanf("%f",&raio);
    }while(raio <= 0);

    area = M_PI*raio*raio;
    printf("Area círculo = %f\n",area);

    return 0;
}