#include <stdio.h>

int main(){

    int tam = 8;
    int vetor1[tam],vetor2[tam], vetorSoma[tam],vetorProduto[tam];
    int cont;

    puts("Preenchendo o primeiro vetor");
    cont = 0;
    while(cont < tam){
        printf("Digite um número na posição %d: ", cont);
        scanf("%d",&vetor1[cont++]);
    }   
    puts("Preenchendo o segundo vetor");
    cont = 0;
    while(cont < tam){
        printf("Digite um número na posição %d: ", cont);
        scanf("%d",&vetor2[cont++]);
    } 
    //Vetor Soma e Vetor Produto
    cont = 0;
    while(cont < tam){
        vetorSoma[cont] = vetor1[cont] + vetor2[cont];
        vetorProduto[cont] = vetor1[cont] * vetor2[cont];
        cont++;
    }

    //Imprimindo o vetor soma
    cont = 0;
    while(cont < tam){
        printf("%d + %d = %d\n",vetor1[cont],vetor2[cont],vetorSoma[cont]);
        cont++;
    }
    cont = 0;
    while(cont < tam){
        printf("%d * %d = %d\n",vetor1[cont],vetor2[cont],vetorProduto[cont]);
        cont++;
    }
    //Imprimindo a diferenca de vetor1[] e vetor2[] 
    int contInterno;
    int achou;
    cont = 0;
    while(cont < tam){
        contInterno = 0;
        achou = 0;
        while(contInterno < tam){
            if(vetor1[cont]==vetor2[contInterno]){
                achou = 1;
            }
            contInterno++;
        }
        if(achou == 0){
            printf("%d ",vetor1[cont]);
        }   
        cont++;
    }
    puts("");
   

    return 0;

}