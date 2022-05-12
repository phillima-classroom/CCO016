#include <stdio.h>

int main(){

    int num1,num2;

    printf("Digite dois números inteiros: \n");
    scanf("%d %d",&num1,&num2);

    if(num1 < num2){
        printf("O número %d é o menor: \n", num1);
    }else{
        printf("O número %d é o menor: \n", num2);
    }
    
    return 0;
}