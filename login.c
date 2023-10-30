#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    char loginsalvo[250] = "Marcelo";
    char senhasalvo [250] = "senai1234"
    char login[250];
    char senha[250];

    printf("Digite o seu login : ");
    gets (login);

    printf("Digite a sua senha : ");
    gets (senha);

    //string compr
    if (strcmp(login,loginsalvo)==0 && strcmp(senha,senhasalvo)==0) {
        printf("Bem-vindo !");
    } else {
        printf("Acesso Negado");
    }

    return 0 ; 
}