#include <stdio.h>

int main(){

    float temperatura;

    printf("Digite a temperatura do paciente: ");
    scanf("%f",&temperatura);

    if(temperatura > 37.5){
        puts("O(a) paciente está com febre!");
    }

    return 0;

}