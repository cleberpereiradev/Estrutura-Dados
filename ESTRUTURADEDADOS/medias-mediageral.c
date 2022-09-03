#include <stdio.h>
main(){
    int alunos;
    float n1, n2, media, somaMedia, mediaGeral;
    alunos = 10;
    somaMedia = 0;
    for(int i = 1; i <= alunos; i++){
        printf("\nAluno: %i", i);
        printf("\nDigite a nota 1: ");
        scanf("%f", &n1);
        printf("\nDigite a nota 2: ");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        printf("Media: %.2f", media);

        if(media >= 6){
            printf("\nAluno aprovado");
        }else{
            printf("\nAluno reprovado");
        }
        somaMedia = somaMedia + media;

    }
    mediaGeral = somaMedia / alunos;
    printf("\nA media geral da sala e: %.2f", mediaGeral);

}
