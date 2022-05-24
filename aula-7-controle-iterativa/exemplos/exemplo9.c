#include <stdio.h>

int main(){
    //Variavel de Entrada
    int n;
    //Variavel de Controle/Processamento
    int cont;
    //Variavel de Saída
    int fatorial = 1;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d",&n);

    for(cont = n; cont > 0; cont--){
        fatorial *= cont;
    }
    printf("Fatorial de %d = %d\n",n,fatorial);

    return 0;

}