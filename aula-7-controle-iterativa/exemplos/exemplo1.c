#include <stdio.h>

int main(){
    //Variavel de entrada
    int n;

    //Processamento
    int cont;

    printf("Digite um número inteiro positivo: ");
    scanf("%d",&n);

    cont = 0;
    //enquanto
    while(cont < n){
        cont++; // cont = cont + 1,  cont += 1;
        printf("Valor do Contador: %d\n", cont);
    }

    return 0;
}