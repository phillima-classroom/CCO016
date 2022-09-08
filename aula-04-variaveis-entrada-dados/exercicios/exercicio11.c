#include <stdio.h>

int main(){

    printf("Digite o valor do angulo em graus: ");
    double anguloG, anguloR;
    scanf("%lf",&anguloG);
    anguloR = anguloG * 3.1415926535898/180;

    printf("Area do circulo %lf\n",anguloR);
    return 0;
}