#include <stdio.h>
#include <math.h>

int main(){

    printf("Digite os valores da base e da altura de um triângulo: \n");
    float base,altura,area;
    scanf("%f %f",&base, &altura);
    area = (base * altura)/2;
    printf("Area do triangulo %f\n",area);
    return 0;
}