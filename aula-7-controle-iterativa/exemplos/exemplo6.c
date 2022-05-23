#include <stdio.h>
#include <math.h>

int main(){
    //Variavel de entrada
    float base,altura;
    
    //Variavel de saida
    float area;

    do{
        printf("Digite a base do triângulo: ");
        scanf("%f",&base);

        printf("Digite a altura do triângulo: ");
        scanf("%f",&altura);
    }while(base <= 0 || altura <= 0);

    area = (base*altura)/2;
    printf("Area triângulo = %f\n",area);

    return 0;
}