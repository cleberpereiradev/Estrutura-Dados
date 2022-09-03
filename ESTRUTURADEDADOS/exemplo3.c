#include <stdio.h>
main(){
    int alunos;
    float n1, n2, media, somaMedia, mediaGeral;
    alunos = 10;
    somaMedia = 0;
    for(int i = 0; i < alunos; i++){
        printf("\nAluno: %i", i);
        printf("\nDigite a nota 1: ");
        scanf("%f ", &n1);
        printf("\nDigite a nota 2: ");
        scanf("%f ", &n2);
        media = (n1 + n2) / 2;
        printf("Media: ", media);
        somaMedia = somaMedia + media;

    }
    mediaGeral = somaMedia / alunos;
    printf("A média geral da sala é: %f", mediaGeral);

}
