#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    int opcao;

    //Confere e valida a opção
    while(opcao < 1 || opcao > 3){

         //Interface de Menu
        printf("Escolha uma opcao:");
        printf("\n1-Opcao 1");
        printf("\n2-Opcao 2");
        printf("\n3-Opcao 3\n");

        //Lendo a opção    
        scanf("%d", &opcao);

        //Resultado de acordo com a opção escolhida
        switch(opcao){
             case 1:
                printf("\nOpcao 1 foi escolhida\n");
                break;
             case 2:
                printf("\nOpcao 2 foi escolhida\n");
                break;
             case 3:
                printf("\nOpcao 3 foi escolhida\n");
                break;
            default:
                printf("\nOpcao Invalida\n");
                break;
        }

    }

}