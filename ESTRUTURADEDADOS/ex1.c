#include<stdio.h>
main(){
    float real;
    int opcoes;

    printf("\nDigite o valor em real: ");
    scanf("%f", &real);
    printf("\nDigite a moeda a converter: ");
    scanf("%i", &opcoes);
    switch(opcoes){
        case 1:
            printf("\nValor em dolar: %.2f", real / 5.4);
            break;
        case 2:
            printf("\nValor em euro: %.2f", real / 6);
            break;
        case 3:
            printf("\nValor em libra: %.2f", real / 7);
            break;
        case 4:
            printf("\nValor em peso: %.2f", real * 1.6);
            break;

        default:
            printf("\nAinda não convertemos essa moeda");
    }
}
