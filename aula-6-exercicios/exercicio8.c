#include <stdio.h>

int main(){

    float salarioAtual, salarioNovo;
    int tempoServico;

    printf("Digite o salario: ");
    scanf("%f",&salarioAtual);

    printf("Digite o tempo de serviço em anos: ");
    scanf("%d",&tempoServico);
    
    //calcula preco novo
    if(salarioAtual <= 500){
        salarioNovo = salarioAtual * 1.25;
    }else if(salarioAtual > 500 && salarioAtual <= 1000){
        salarioNovo = salarioAtual * 1.20;        
    }else if(salarioAtual > 1000 && salarioAtual <= 1500){
        salarioNovo = salarioAtual * 1.15 ;
    }else if(salarioAtual > 1500 && salarioAtual <= 2000){
        salarioNovo = salarioAtual * 1.1;
    }else if(salarioAtual > 2000){
        salarioNovo = salarioAtual;
    } 
    
    //emite a mensagem
    if(tempoServico <= 1){
        printf("Salario Novo = %0.2f\n",salarioNovo);
        printf("Sem bônus!\n");
    }else if(tempoServico > 1 && tempoServico <= 3){
        printf("Salario Novo = %0.2f\n",salarioNovo);
        printf("Bônus = R$ 100!\n");
    }else if(tempoServico > 3 && tempoServico <= 6){
        printf("Salario Novo = %0.2f\n",salarioNovo);
        printf("Bônus = R$ 200!\n");
    }else if(tempoServico > 6 && tempoServico <= 10){
        printf("Salario Novo = %0.2f\n",salarioNovo);
        printf("Bônus = R$ 300!\n");
    }else if(tempoServico > 10){
        printf("Salario Novo = %0.2f\n",salarioNovo);
        printf("Bônus = R$ 500!\n");
    }
        
    return 0;

}