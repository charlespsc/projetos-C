#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para adicionar acentuação

//Funçãoo principal do programa
void main(){

    setlocale(LC_ALL, ""); // Permite usar acentos, as aspas duplas são para pegar o idioma do seu PC

    //Imprime na tela
    printf("Olá mundo!\n");

}

