#include <stdio.h>

int main(){

    int tam = 8;
    char palavra[tam];
    int cont;

    cont = 0;
    while(cont < tam){
        printf("Digite uma letra (a-z) na posição %d: ", cont);
        scanf("%c",&palavra[cont++]);
        fflush(stdin);
    }   
    cont = tam-1;
    while(cont >= 0){
        printf("%c ",palavra[cont]);
        cont--;
    }
    puts("");
    printf("%s\n",palavra);
 

    return 0;

}