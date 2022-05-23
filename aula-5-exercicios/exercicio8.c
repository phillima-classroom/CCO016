#include <stdio.h>
#include <math.h>

int main(){

    //Variaveis de entrada
    float anguloGraus;

    //Variavel de saida
    float seno,cosseno,tangente;

    //Variavel processamento
    float anguloRad;

    //Entrada de dados
    printf("Digite o valor do angulo em graus: ");
    scanf("%f",&anguloGraus);

    //Processamento
    anguloRad = (anguloGraus*M_PI)/180;
    seno = sin(anguloRad);
    cosseno = cos(anguloRad);
    tangente = tan(anguloRad);
    
    //Imprimir resultado
    printf("Seno = %f, Cosseno = %f, Tangente = %f\n",seno,cosseno,tangente);
    
    return 0;
}