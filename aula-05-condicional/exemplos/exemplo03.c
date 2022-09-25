#include <stdio.h>

int main(){

    double temperatura;

    printf("Digite a temperatura do paciente: ");
    scanf("%lf",&temperatura);

    if(temperatura > 37.5){
        printf("O(a) paciente esta com febre!\n");
    } else{
        printf("Temperatura normal!\n");
    }

    return 0;

}