#include <stdio.h>

int main(){

    //Variáveis de entrada
    float temperaturaAgua;

    printf("Digite a temperatura da agua em graus celsius: ");
    scanf("%f", &temperaturaAgua);

    if(temperaturaAgua <= 0.0){
        printf("Estado Solido.\n");
    }else if(temperaturaAgua >= 100.0){
        printf("Estado Gasoso.\n");
    }else{
        printf("Estado Liquido.\n");
    }
    
    return 0;

}