#include <stdio.h>

int main(){

    float salario,prestacao;

    printf("Digite o salário: ");
    scanf("%f",&salario);

    printf("Digite o valor da parcela do empréstimo: ");
    scanf("%f",&prestacao);

    if(prestacao > salario*0.2){//Parcela superior a 20% do salário
        puts("emprestimo não concedido");
    }else{
        puts("emprestimo concedido");
    }


    
    return 0;
}