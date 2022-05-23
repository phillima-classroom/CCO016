#include <stdio.h>

int main(){

    //Variaveis de entrada
    float base,altura;

    //Variaveis de saída
    float area, potenciaIluminacao;

    //Entrada de dados
    printf("Digite as dimensoes de um cômodo retangular (dois valores):\n");
    scanf("%f %f",&base,&altura);

    //Processamento
    area = (base*altura)/2;
    potenciaIluminacao = area * 18;

    //Imprimir resultado
    printf("Area = %0.2f\n", area);
    printf("Potância Necessária = %0.2f\n", potenciaIluminacao);

    return 0;
}