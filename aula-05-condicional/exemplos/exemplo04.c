#include <stdio.h>
#include <math.h>

int main(){

    //Variáveis de entrada
    double cateto1,cateto2,hipotenusa;

    printf("Digite os valores dos catetos do triangulo: \n");
    scanf("%lf %lf",&cateto1,&cateto2);

    printf("Digite o valor da hipotenusa: ");
    scanf("%lf",&hipotenusa);

    if(pow(hipotenusa,2) == (pow(cateto1,2) + pow(cateto2,2))){
        printf("E um triangulo retangulo!\n");
    }else{
        printf("Nao e um triangulo retangulo!\n");
    }

    return 0;

}