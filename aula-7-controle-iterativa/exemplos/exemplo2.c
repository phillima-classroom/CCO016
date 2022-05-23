#include <stdio.h>

int main(){
    //Variavel de entrada
    int n;
    //Processamento
    int cont;
    //Variavel de saida
    int somatorio;

    printf("Digite um número inteiro positivo: ");
    scanf("%d",&n);

    cont = 0;
    somatorio = 0;
    //enquanto
    while(cont < n){
        cont++; 
        somatorio += cont;
    }

    printf("Somatório = %d\n",somatorio);

    return 0;
}