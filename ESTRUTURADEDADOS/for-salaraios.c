#include<stdio.h>
int main(){
float sal, pts, salFinal;

    for(int i = 0; i < 20; i++)
    {
        printf("Digite seu Salario: ");
        scanf ("%f", &sal);

        printf("Digite a quantidade de pontos: ");
        scanf ("%f", &pts);

        if (pts >= 1000){
            salFinal = sal + 500;
        }
        else if (pts >= 500){
            salFinal = sal + 300;
        }
        else if (pts >= 100){
            salFinal = sal + 100;
        }
        else{
            salFinal = sal + 25;
        }

        printf("\nO salario com bonus e de : R$%f", salFinal);


    }
    printf("\nFim de execucao");

}
