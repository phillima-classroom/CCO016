#include <stdio.h>


int main(){
    int tam = 12;
    int numeros[tam];
    int cont;
    int par = 0, impar = 0;
    

    //entrada dos dados
    cont = 0;
    while(cont < tam){
        printf("Digite um número para posição %d: ", cont);
        scanf("%d", &numeros[cont++]);
    }
    

    cont = 0;
    while(cont < tam){
        if(numeros[cont]%2==0){
            par++;
        }else{
            impar++;
        }
        cont++;
    }
    
    printf("%d %d\n",par,impar);

    return 0;
}