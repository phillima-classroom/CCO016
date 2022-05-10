#include <stdio.h>

int main(){

    int dia;
    printf("Digite uma um número de 1 a 7: ");
    scanf("%d",&dia);
    switch (dia) {
        case 1:
            puts("Domingo");
        break;
        case 2:
            puts("Segunda-feira");
        break;
        case 3:
            puts("Terça-feira");
        break;
        case 4:
            puts("Quarta-feira");
        break;
        case 5:
            puts("Quinta-feira");
        break;
        case 6:
            puts("Sexta-feira");
        break;
        case 7:
            puts("Sábado");
        break;
        default:
            puts("Opção inválida.");
        break;
    }
    return 0;
}