#include <stdio.h>

int main(){

    int linha = 2;
    int coluna = 4;
    float matriz[linha][coluna];
    int contLinha,contColuna;
    
    //Preenchendo
    contLinha = 0;
    while(contLinha < linha){
        contColuna = 0;
        printf("Dados para a linha %d\n",contLinha);
        printf("Digite sua matrícula: ");
        scanf("%f",&matriz[contLinha][0]);

        printf("Digite sua N1: ");
        scanf("%f",&matriz[contLinha][1]);

        printf("Digite sua N2: ");
        scanf("%f",&matriz[contLinha][2]);

        //Armazendo a média
        matriz[contLinha][3] = (matriz[contLinha][1] + matriz[contLinha][2])/2;

        contLinha++;
    }
    //Imprimindo
    contLinha = 0;
    puts("\n\n");
    printf("Mat N1   N2  Média\n");
    while(contLinha < linha){
        contColuna = 0;
        while(contColuna < coluna){
            if(contColuna==0){
                printf("%2.0f ",matriz[contLinha][contColuna]);
            }else{
                printf("%0.2f ",matriz[contLinha][contColuna]);
            }
            
            contColuna++;
        }
        contLinha++;
        puts("");
    }

    return 0;

}