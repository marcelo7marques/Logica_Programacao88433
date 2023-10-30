#include <stdio.h>
#include <stdlib.h>

//declarando variaveis
int main (){
    float primeiranota;  
    float segundanota;
   	float media;

//solicitando dados ao usuario   	
   	printf ("Digite a primeira nota: ");
   	scanf ("%f",&primeiranota);
   	
   	printf ("Digite a segunda nota: ");
   	scanf ("%f",&segundanota);
   	
   	//calculando a media
   	media = (primeiranota+segundanota)/2;
   	
   	//exibindo dados ao usuario
   	if (media >= 7)
   	{
   		printf("Aprovado \n");
	   }
   	else
   	{
   		printf("Reprovado \n");
	   }
	   
	   
   	printf("Media: %.2f",media);
   	
   	
	   return 0;
   }
