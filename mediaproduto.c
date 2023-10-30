#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int numero1,numero2,soma,produto,maior,menor;
    float media;

    printf("Digite o primeiro numero : ");
    scanf("%d",&numero1);

    printf("Digite o segundo numero : ");
    scanf("%d",&numero2);

    soma = numero1 + numero2;
    produto = numero1 * numero2;
    media = soma/2;

    //operação ternaria
    maior = numero1 > numero2 ? numero1 : numero2;
    menor = numero1 < numero2 ? numero1 : numero2;

    //if (numero1 > numero2){
    //    maior = numero1;
    //    menor = numero2;
    //} else {
    //    maior = numero2;
    //    menor = numero1;
    
    
    printf("Soma : %d \n"  , soma);
    printf("Produto : %d \n",produto);
    printf("Media : %.2f \n",media);
    printf("Maior Numero : %d \n",maior);
    printf("Menor Numero : %d \n",menor);

    return 0; 
    }