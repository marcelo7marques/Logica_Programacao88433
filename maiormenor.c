#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int numero;
    printf ("Digite um número : ");
    scanf("%d",&numero);

    if (numero == 10) {
        printf("É IGUAL A 10 ! ");
    } else {
    if (numero > 10) {
        printf("É MAIOR A 10 !");
    } else {
        printf ("NÃO É MAIOR A 10 !");
    }

    }
    
    if (numero ==10 ){
        printf("É IGUAL A 10 !");
        
    } else if (numero > 10) {
        printf("É MAIOR A 10");
    } else if (numero > 5) {
        printf("É MAIOR QUE 5 !");
    } else if (numero > 3) {
        printf("É MAIOR QUE 3 !");
    } else { 
        printf("NÃO É MAIOR QUE 3 !");
    }   
    return 0;
}