#include <stdio.h>
#include <math.h>

int main(){

    printf("Digite o valor do cateto C1: ");
    float cateto1;
    scanf("%f",&cateto1);

    printf("Digite o valor do cateto C2: ");
    float cateto2;
    scanf("%f",&cateto2);

    float hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
    
    printf("Para os catetos C1 = %0.2f e C2 = %0.2f, Hipotenusa = %0.2f.\n",cateto1,cateto2,hipotenusa);

    return 0;
}