#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    
    time_t t;
    srand((unsigned) time(&t));

    int m,n;
    int menor,posX=0,posY=0;
    printf("Digite o número de linhas (M) para a matriz: ");
    scanf("%d",&m);
    printf("Digite o número de colunas (N) para a matriz: ");
    scanf("%d",&n);
    
    int matriz[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = (rand()%151);
        }
    }

    menor = matriz[0][0];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
           printf("%3d ",matriz[i][j]);
        }
        puts("");
    }
    
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                posX = i;
                posY = j;
            }
        }
    }
    printf("Menor valor = %d\n",menor);
    printf("Linha = %d, Coluna = %d\n",posX,posY);

    return 0;
}