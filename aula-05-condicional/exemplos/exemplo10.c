#include <stdio.h>

int main(){

    int dia;
    printf("Digite uma um número de 1 a 7 (1-Domingo e 7-Sabado): ");
    scanf("%d",&dia);
    switch (dia) {
        case 1:
            printf("Domingo\n");
        break;
        case 2:
            printf("Segunda-feira\n");
        break;
        case 3:
            printf("Terca-feira\n");
        break;
        case 4:
            printf("Quarta-feira\n");
        break;
        case 5:
            printf("Quinta-feira\n");
        break;
        case 6:
            printf("Sexta-feira\n");
        break;
        case 7:
            printf("Sabado\n");
        break;
        default:
            printf("Opcao invalida.\n");
        break;
    }
    return 0;
}