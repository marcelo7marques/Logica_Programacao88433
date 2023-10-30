#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    char nome[250];
    int idade;
    float nota1,nota2,nota3,media;
    
    printf("Digite o nome do aluno : ");
    scanf("%s",&nome);

    printf("Digite a idade do aluno : ");
    scanf("%d",&idade);

    printf("Digite a primeira nota do aluno : ");
    scanf("%f",&nota1);
    
    printf("Digite a segunda nota do aluno : ");
    scanf("%f",&nota2);
    
    printf("Digite a terceira nota do aluno : ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media >= 7) {
        printf("O aluno %s",nome);
        printf("Com a idade %d",idade);
        printf("Tem a nota total : %f ",media); 
        printf("Com isso está Aprovado ");
    }
    else {
        printf("O aluno %s",nome);
        printf("Com a idade %d",idade);
        printf("Tem a nota total : %f ",media); 
        printf("Com isso está Reprovado");
    }

    

    return 0;
}


