#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int idade = 0;
	float peso = 0;
	char sexo;
	char nome [250];
	
	printf("DIGITE SUA IDADE: ");
	scanf("%d",&idade);
	
	printf("DIGITE SEU PESO: ");
	scanf("%f",&peso);
	
	fflush (stdin);
	
	printf("INFORME O SEU SEXO: ");
	scanf("%c",&sexo);
	
	fflush(stdin);
	
	printf("DIGITE O SEU NOME: ");
	//scanf("%s",&nome);
	//fgets(nome,250,stdin);
	
	gets(nome);
	
	printf("\n Nome: %s",nome);
	printf("\n Idade: %d",idade);
	printf("\n Peso: %.2f",peso);
	printf("\n Sexo: %c",sexo);
	
	return 0;
}
