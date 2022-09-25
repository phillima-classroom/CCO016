#include <stdio.h>

int main(){

    float op1,op2,div;
    printf("Digite dois valores para a divisao: \n");
    scanf("%f %f",&op1,&op2);

    if(op2==0)
    {
        printf("Impossivel divisao por 0 (zero)\n");
    }
    else
    {
        div = op1/op2;
        printf("A divisao de %0.3f por %0.3f = %0.3f\n",op1,op2,div);
    }

    return 0;
}