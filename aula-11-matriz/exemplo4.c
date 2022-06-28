#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int linha;
    int coluna;
    int contLinha,contColuna;

    printf("Digite um valor para M (linha): ");
    scanf("%d",&linha);

    printf("Digite um valor para N (coluna): ");
    scanf("%d",&coluna);

    int matrizA[linha][coluna];
    int matrizAT[coluna][linha];
    
    //Preenchendo com valores aleatórios
    srand(time(0));
    contLinha = 0;
    while(contLinha < linha){
        contColuna = 0;
        while(contColuna < coluna){
            matrizA[contLinha][contColuna] = rand()%101;
            contColuna++;
        }
        contLinha++;
    }
    //Populando a matriz transposta
    contLinha = 0;
    while(contLinha < linha){
        contColuna = 0;
        while(contColuna < coluna){
            matrizAT[contColuna][contLinha] = matrizA[contLinha][contColuna];
            contColuna++;
        }
        contLinha++;
    }


    //Imprimindo matriz original
    contLinha = 0;
    while(contLinha < linha){
        contColuna = 0;
        while(contColuna < coluna){
            printf("%d  ",matrizA[contLinha][contColuna]);
            contColuna++;
        }
        contLinha++;
        puts("");
    }
    puts("");

    //Imprimindo matriz transposta
    contLinha = 0;
    while(contLinha < coluna){
        contColuna = 0;
        while(contColuna < linha){
            printf("%d  ",matrizAT[contLinha][contColuna]);
            contColuna++;
        }
        contLinha++;
        puts("");
    }
    return 0;

}