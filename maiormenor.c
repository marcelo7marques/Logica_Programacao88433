#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int numero;
    printf ("Digite um n�mero : ");
    scanf("%d",&numero);

    if (numero == 10) {
        printf("� IGUAL A 10 ! ");
    } else {
    if (numero > 10) {
        printf("� MAIOR A 10 !");
    } else {
        printf ("N�O � MAIOR A 10 !");
    }

    }
    
    if (numero ==10 ){
        printf("� IGUAL A 10 !");
        
    } else if (numero > 10) {
        printf("� MAIOR A 10");
    } else if (numero > 5) {
        printf("� MAIOR QUE 5 !");
    } else if (numero > 3) {
        printf("� MAIOR QUE 3 !");
    } else { 
        printf("N�O � MAIOR QUE 3 !");
    }   
    return 0;
}