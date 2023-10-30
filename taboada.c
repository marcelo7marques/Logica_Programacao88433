#include <stdio.h>


int main (){
    int A,B,soma,subtracao,multi,divisao;

    printf("DIGITE O PRIMEIRO VALOR : \n");
    scanf("%d",&A);
    printf("DIGITE O SEGUNDO VALOR: \n");
    scanf("%d",&B);

    soma = A + B;
    subtracao = A - B;
    multi = A * B;
    divisao = A / B;

    printf("RESULTADOS : \n");
    printf("SOMA : %d\n",soma);
    printf("SUBTRACAO : %d\n",subtracao);
    printf("MULTIPLICACAO : %d\n",multi);
    printf("DIVISAO : %d\n",divisao);

    return 0;
}