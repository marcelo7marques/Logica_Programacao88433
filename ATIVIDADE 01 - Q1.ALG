Algoritmo "ATIVIDADE 01 - Q1"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : CARLOS ANDERSON
// Descri��o   : Fa�a um algoritmo que leia os valores A, B, C e imprima na tela
// se a soma de A + B � menor
// que C, caso contr�rio, imprima que a A + B � maior que C.)
// Autor(a)    : MARCELO MARQUES
// Data atual  : 31/08/2023
Var
// Se��o de Declara��es das vari�veis 
A : INTEIRO
B : INTEIRO
C : INTEIRO
SOMA : INTEIRO

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
ESCREVAL ("DIGITE O PRIMEIRO NUMERO : ")
LEIA(A)
ESCREVAL ("DIGITE O SEGUNDO NUMERO : ")
LEIA(B)
ESCREVAL ("DIGITE O TERCEIRO NUMERO : ")
LEIA(C)

SOMA <- A+B

SE SOMA < C ENTAO
ESCREVAL ("A SOMA DO PRIMEIRO E SEGUNDO NUMERO � MENOR QUE O TERCEIRO NUMERO")
SENAO
ESCREVAL ("A SOMA DO PRIMEIRO E SEGUNDO NUMERO � MAIOR QUE O TERCEIRO NUMERO")
FIMSE

Fimalgoritmo