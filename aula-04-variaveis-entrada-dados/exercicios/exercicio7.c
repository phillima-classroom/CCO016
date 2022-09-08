#include <stdio.h>

int main(){

    printf("Digite os valores das bases menor e maior de um trapézio: \n");
    float baseMenor,baseMaior,area,altura;
    scanf("%f %f",&baseMenor, &baseMaior);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);
    area = ((baseMaior + baseMenor) * altura)/2;
    printf("Area do trapézio %f\n",area);
    return 0;
}