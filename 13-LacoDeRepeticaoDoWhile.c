#include <stdio.h>
#include <stdlib.h>

//Funçãoo principal do programa
void main(){

    //Definindo Variáveis
    int a = 1;

    //Primeiro confere a condiçãoo, depois repete o bloco
    while(a <= 10){

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a++;     //a = a + 1;

    }

    //Alterando o valor de 'a'
    a = 20;

    //Primeiro executa uma vez, depois confere a condiçãoo
    do{

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a++;     //a = a + 1;

    }while(a <= 10);

}