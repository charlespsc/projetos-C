#include <stdio.h>
#include <stdlib.h>

//Funçãoo principal do programa
void main(){

    //Definir Variáveis
    int contador;

    //Tabuada do 5
    for(contador = 1; contador <= 10; contador++){
        printf("\n 5 X %d = %d",contador, 5 * contador);
    }

    //Contando de 2 em 2
    for(contador = 0; contador <= 10; contador = contador + 2){
        printf("\n%d",contador);
    }

    //Contagem regressiva
    for(contador = 10; contador > 0; contador--){
        printf("\n%d", contador);
    }

}

