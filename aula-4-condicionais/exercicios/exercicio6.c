#include <stdio.h>

int main(){

    int ano;

    printf("Digite o ano (0001 menor ano): ");
    scanf("%d",&ano);

    if((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
        puts("sim");
    }else{
        puts("não");
    }

    return 0;
}