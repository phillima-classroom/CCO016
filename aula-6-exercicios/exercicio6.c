#include <stdio.h>


int main(){

    int horasTrabalhadas;
    float pagamento;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d",&horasTrabalhadas);
    
    if(horasTrabalhadas <= 40){
        pagamento = 8 * horasTrabalhadas;
    }else{
        pagamento = 320 + 12 * (horasTrabalhadas-40);
    }  
    printf("Pagamento: %0.2f\n", pagamento);
        
    return 0;

}