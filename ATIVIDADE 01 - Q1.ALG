Algoritmo "ATIVIDADE 01 - Q1"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : CARLOS ANDERSON
// Descrição   : Faça um algoritmo que leia os valores A, B, C e imprima na tela
// se a soma de A + B é menor
// que C, caso contrário, imprima que a A + B é maior que C.)
// Autor(a)    : MARCELO MARQUES
// Data atual  : 31/08/2023
Var
// Seção de Declarações das variáveis 
A : INTEIRO
B : INTEIRO
C : INTEIRO
SOMA : INTEIRO

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
ESCREVAL ("DIGITE O PRIMEIRO NUMERO : ")
LEIA(A)
ESCREVAL ("DIGITE O SEGUNDO NUMERO : ")
LEIA(B)
ESCREVAL ("DIGITE O TERCEIRO NUMERO : ")
LEIA(C)

SOMA <- A+B

SE SOMA < C ENTAO
ESCREVAL ("A SOMA DO PRIMEIRO E SEGUNDO NUMERO É MENOR QUE O TERCEIRO NUMERO")
SENAO
ESCREVAL ("A SOMA DO PRIMEIRO E SEGUNDO NUMERO É MAIOR QUE O TERCEIRO NUMERO")
FIMSE

Fimalgoritmo