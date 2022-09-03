#include<stdio.h>
main(){
   float media;
   int freq;
   printf("\nDigite sua media: ");
   scanf("%f", &media);
   printf("\nDigite sua frequencia: ");
   scanf("%i", &freq);
   if((media >= 6) && (freq >= 75)){
    printf("\nAprovado");
   }else{
    printf("\nReprovado");
   }
}
