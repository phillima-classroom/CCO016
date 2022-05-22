#include <stdio.h>


int main(){

    int num1,num2,num3,num4;

    int maior,menor;
    printf("Digite 4 (quatro) números inteiros: \n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    //Supondo 
    menor = num1;
    maior = num1;
    
    if(menor > num2){
        menor = num2;
    }
    if(menor > num3){
        menor = num3;
    }
    if(menor > num4){
        menor = num4;
    }

    if(maior < num2){
        maior = num2;
    }
    if(maior < num3){
        maior = num3;
    }
    if(maior < num4){
        maior = num4;
    }

    printf("%d \n%d\n",menor,maior);
    return 0;

}