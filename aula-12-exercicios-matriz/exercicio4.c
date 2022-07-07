#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time(&t));

    int n = 3;
    char campoMinado[n][n];
    int x = (rand()%n);
    int y = (rand()%n);
    //printf("Bomba %d %d\n",x,y);
    for(int i = 0; i < n; i++)
        for(int  j = 0; j < n; j++)
            campoMinado[i][j] = '-';

    int xUser,yUser;
    int limpouCampo = 1;

    printf("Campo Minado %d X %d\n",n,n);
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < n; j++){
            printf("%c ",campoMinado[i][j]);
        }
        puts("");
    }

    do{
        printf("Digite uma coordenada X (0-%d): ",n-1);
        scanf("%d",&xUser);
        printf("Digite uma coordenada Y (0-%d): ",n-1);
        scanf("%d",&yUser);
        limpouCampo = 1;
        if(xUser==x && yUser==y){
            printf("Acertou a bomba :(\n");
            campoMinado[x][y] = 'X';
            for(int i = 0; i < n; i++){
                for(int  j = 0; j < n; j++){
                    printf("%c ",campoMinado[i][j]);
                }
                puts("");
            }
            printf("Game Over!\n");
            limpouCampo=0;
            break;
        }else{
            campoMinado[xUser][yUser] = 'O';
            printf("Nada de Bomba Por Enquanto!!!\n");
            for(int i = 0; i < n; i++){
                for(int  j = 0; j < n; j++){
                    printf("%c ",campoMinado[i][j]);
                    if(campoMinado[i][j]=='-'){
                        if(i==x && j==y){
                            continue;
                        }else{
                            limpouCampo=0;
                        }
                    }
                }
                puts("");
            }
        }
    }while(limpouCampo==0);
    if(limpouCampo==1){
        printf("Aeeeeeeeeee\n");
    }
    return 0;
}