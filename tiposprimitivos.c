#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade = 20;  //inteiro
    float peso = 80.2; //real
    char sexo = 'F';   //caractere
   	char nome [250] = "Marta";
   	
   	//int -> números inteiros
   	//float -> numeros reais
   	//char -> apenas um caracter
   	//char nome_variavel [quantidade de caracteres]
   	//cadeia de caracteres.
    
	printf("\n Idade : %d anos.", idade);  //% decimal pode ser d ou i 
    printf("\n Peso: %.2f " , peso);
    printf("\n Sexo: %c " , sexo);
	printf("\n Nome: %s ",nome);
    
	return 0;
}
