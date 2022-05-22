#include <stdio.h>


int main(){

    //Variaveis entrada
    float salario,valorEmprestimo;
    int qtdPrestacao;

    //Variaveis processamento
    float taxaBanco,valorParcela;


    printf("Digite o salário: ");
    scanf("%f",&salario);

    printf("Digite o valor do empréstimo desejado: ");
    scanf("%f",&valorEmprestimo);

    printf("Digite o número de parcelas: ");
    scanf("%d",&qtdPrestacao);
    
    taxaBanco = valorEmprestimo*0.1;

    valorParcela = (valorEmprestimo + taxaBanco)/qtdPrestacao;

    if(valorParcela > salario*0.2){
        printf("nao\n");
    }else{
        printf("sim\n");
    }
    
    
    return 0;

}