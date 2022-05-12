#include <stdio.h>
#include <math.h>

int main(){

    float coeficienteA,coeficienteB,coeficienteC,delta,raiz1,raiz2;

    printf("Digite os coeficientes de uma equação do segundo grau, iniciando por A até C: \n");
    scanf("%f %f %f",&coeficienteA,&coeficienteB,&coeficienteC);

    delta = pow(coeficienteB,2) - 4*coeficienteA*coeficienteC;

    if(delta < 0){
        puts("sem raízes reais");
    }else {
        raiz1 = (-coeficienteB + sqrt(delta))/(2*coeficienteA);
        raiz2 = (-coeficienteB - sqrt(delta))/(2*coeficienteA);
        if(delta == 0){//raizes iguais
           printf("Raízes reais e iguais: %0.2f\n",raiz1); 
        }else{
            if(raiz1 < raiz2){
               printf("Raízes reais e distintas: %0.2f %0.2f\n",raiz1,raiz2);  
            }else{
                printf("Raízes reais e distintas: %0.2f %0.2f\n",raiz2,raiz1);  
            }
        } 
    }

    return 0;
}