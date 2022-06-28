#include <stdio.h>

int main(){

    int linha = 5;
    int coluna = 5;
    int matriz[linha][coluna];
    int contLinha,contColuna;

    contLinha = 0;
    while(contLinha < linha){
        contColuna = 0;
        while(contColuna < coluna){
            if(contColuna==contLinha){
                matriz[contLinha][contColuna] = 1;
            }else{
                matriz[contLinha][contColuna] = 0;
            }
            contColuna++;
        }
        contLinha++;
    }
    contLinha = 0;
    while(contLinha < linha){
        contColuna = 0;
        while(contColuna < coluna){
            printf("%d ",matriz[contLinha][contColuna]);
            contColuna++;
        }
        contLinha++;
        puts("");
    }

    return 0;

}