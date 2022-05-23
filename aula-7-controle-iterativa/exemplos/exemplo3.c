#include <stdio.h>

int main(){
    //Variavel de entrada
    int n;
    //Processamento
    int cont;
    //Variavel de saida
    float somatorio;

    printf("Digite um número inteiro positivo: ");
    scanf("%d",&n);

    cont = 0;
    somatorio = 0;
    //enquanto
    while(cont < n){
        cont++; 
        somatorio += (1.0/cont);
    }

    printf("Somatório = %f\n",somatorio);

    return 0;
}