#include<stdio.h>
main(){
    int num;
    printf("\nDigite um numero: ");
    scanf("%i", &num);
    if(num == 0){
        printf("\nNeutro");
    }else if(num%2 == 0){
        printf("\nPar");
    }else{
        printf("\nImpar");
    }
}
