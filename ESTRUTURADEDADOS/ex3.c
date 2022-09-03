#include<stdio.h>
main(){
    float peso, altura, imc;
    printf("\nDigite o peso: ");
    scanf("%f", &peso);
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if(imc < 18.5){
        printf("\nAbaixo do peso");
    }else if((imc > 18.5) && (imc < 25)){
        printf("\nPeso ideal(parabens");
    }else if((imc >= 25) && (imc < 30)){
        printf("\nLevemente acima do peso");
    }else if((imc >= 30) && (imc < 35)){
        printf("\nObesidade grau I");
    }else if((imc >= 35) && (imc < 40)){
        printf("\nObesidade grau II(severa)");
    }else if(imc > 40){
        printf("\Obesidade grau III(morbida)");
    }
}
