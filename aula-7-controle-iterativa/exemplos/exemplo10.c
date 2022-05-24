#include <stdio.h>

int main(){
    //Variavel de Entrada
    int n;
    //Variavel de Controle/Processamento
    int cont, fatorial = 1;
    //Variavel de Saída
    double soma = 1;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d",&n);

    for(cont = 1; cont <= n; cont++){
        fatorial *= cont;
        soma+= (1.0/fatorial);
    }
    printf("Soma = %.25f\n",soma);//mostrando 25 casas decimais

    return 0;

}