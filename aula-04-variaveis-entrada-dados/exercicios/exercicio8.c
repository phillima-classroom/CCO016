#include <stdio.h>
#include <math.h>

int main(){

    printf("Digite o valor do raio: ");
    double raio,area;
    scanf("%lf",&raio);
    area = 3.1415926535898*pow(raio,2);

    printf("Area do circulo %f\n",area);
    return 0;
}