#include <stdio.h>

int main(){

    float lado1,lado2,lado3;

    printf("Digite a medida dos três lados do triângulo: \n");
    scanf("%f %f %f",&lado1,&lado2,&lado3);

    if(lado1 == lado2 && lado1 == lado3){
        puts("equilátero");
    }else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
        puts("escaleno");
    }else{
        puts("isósceles");
    }
        
    return 0;
}