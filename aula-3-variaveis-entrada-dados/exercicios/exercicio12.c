#include <stdio.h>

int main(){

    printf("Digite o salario do funcionario: ");
    float salario, novoSalario;
    scanf("%f",&salario);

    novoSalario = salario * 1.2;
    
    printf("Novo salario: %0.2f\n",novoSalario);

    return 0;
}