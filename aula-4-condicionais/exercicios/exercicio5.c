#include <stdio.h>

int main(){

    float preco,precoFinal;
    int estado;

    printf("Digite o estado (1-MG, 2-SP, 3-RJ, 4-ES): ");
    scanf("%d",&estado);

    printf("Digite o preço do produto: ");
    scanf("%f",&preco);

    switch (estado)
    {
    case 1:
        puts("Minas Gerais");
        precoFinal = preco*1.12;
        break;
    case 2:
        puts("São Paulo");
        precoFinal = preco*1.07;
        break;
    case 3:
        puts("Rio de Janeiro");
        precoFinal = preco*1.15;
        break;
    case 4:
        puts("Espírito Santo");
        precoFinal = preco*1.08;
        break;
    default:
        break;
    }

    printf("Preço final: %0.2f\n", precoFinal);
    
    return 0;
}