#include <stdio.h>

int main(){

    //Variáveis de entrada
    float temperaturaAgua;

    printf("Digite a temperatura da agua em graus celsius: ");
    scanf("%f", &temperaturaAgua);

    if(temperaturaAgua <= 0.0){
        puts("Estado Sólido.");
    }else{
        if(temperaturaAgua >= 100.0){
            puts("Estado Gasoso.");
        }else{
            puts("Estado Líquido.");
        }
    }
    return 0;

}