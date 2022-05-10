#include <stdio.h>
#include <math.h>

int main(){

    //Variáveis de entrada
    float cateto1,cateto2,hipotenusa;

    printf("Digite os valores dos catetos do triângulo:\n ");
    scanf("%f %f",&cateto1,&cateto2);

    printf("Digite o valor da hipotenusa: ");
    scanf("%f",&hipotenusa);

    if(pow(hipotenusa,2) == (pow(cateto1,2) + pow(cateto2,2))){
        puts("É um triângulo retângulo!");
    }

    return 0;

}