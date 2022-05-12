#include <stdio.h>
#include <math.h>

int main(){

    int idade,tempoServico;
    
    printf("Digite a idade: ");
    scanf("%d",&idade);

    printf("Digite o tempo de serviço em anos: ");
    scanf("%d",&tempoServico);

    if(idade >= 65 || tempoServico >= 30 || (tempoServico >= 25 && idade >= 60)){
        puts("sim");
    }else {
       puts("não");
    }

    return 0;
}