#include <stdio.h>

struct aluno{
    float prova1;
    float prova2;
    float prova3;
    float media;
};

float Media(float nota1, float nota2, float nota3) {
    float media;
    media = (nota1 + nota2 + nota3) / 3;
    return media;
};

int main(){
    struct aluno aluno1, aluno2, aluno3;
    aluno1.prova1=10;
    aluno1.prova2=7;
    aluno1.prova3=4;
    aluno1.media= Media(aluno1.prova1, aluno1.prova2, aluno1.prova3);
    aluno2.prova1=10;
    aluno2.prova2=7;
    aluno2.prova3=4;
    aluno2.media= Media(aluno2.prova1, aluno2.prova2, aluno2.prova3);
    aluno3.prova1=10;
    aluno3.prova2=7;
    aluno3.prova3=4;
    aluno3.media= Media(aluno3.prova1, aluno3.prova2, aluno3.prova3);
    printf("-----------------------------\n");
    printf("nota1: %f\n", aluno1.prova1);
    printf("nota2: %f\n", aluno1.prova2);
    printf("nota3: %f\n", aluno1.prova3);
    printf("media: %f\n", aluno1.media);
    printf("situação: %s\n", aluno1.media>=7.0?"aprovado":"reprovado");
    printf("-----------------------------\n");
    return 0;
}