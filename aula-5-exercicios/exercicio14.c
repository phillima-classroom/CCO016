#include <stdio.h>

int main(){

    //Variaveis de entrada
    float valorDiariaNormal;

    //Variavel de saida
    float valorDiariaPromocional, valorArrecadadoPromo, valorArrecadadoNormal, valorDiferenca;

    //Entrada de dados
    printf("Digite o valor da diaria normal: ");
    scanf("%f",&valorDiariaNormal);

    //Processamento
    valorDiariaPromocional = valorDiariaNormal*.75;
    valorArrecadadoPromo = 80*0.8*valorDiariaPromocional;
    valorArrecadadoNormal = 80*0.5*valorDiariaNormal;
    valorDiferenca = valorArrecadadoPromo - valorArrecadadoNormal;
    
    //Imprimir resultado
    printf("Valor diária promocional = %0.2f\n", valorDiariaPromocional);
    printf("Valor arrecadado promo = %0.2f\n",valorArrecadadoPromo);
    printf("Valor arrecadado normal = %0.2f\n",valorArrecadadoNormal);
    printf("Valor Diferença = %0.2f\n",valorDiferenca);
    
    return 0;
}