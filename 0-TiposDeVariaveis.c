#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para adicionar acentuação

//Funçãoo principal do programa
void main(){

    // Permite usar acentos, as aspas duplas são para pegar o idioma do seu PC
    setlocale(LC_ALL, ""); 

    //Imprime na tela
    printf("Olá mundo!\n");

    char c = 'T'; // Letras
    printf("O valor de c é = %c\n", c);
    printf("Digite o novo valor para c -> ");
    
    fflush(stdin); // Limpar o Buffer antes de trabalhar com o char
    // não está chamando o teclado para executar a menos que inverta a ordem char -> int -> float OU execute apenas a variavel char
    scanf("%c", &c);
    printf("O valor de c mudou para %c\n", c);

    int a = 50; // Valores Inteiros
    printf("O valor de a é = %d\n", a);
    printf("Digite o novo valor para a -> ");
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n", a);

    float b = 5.5; // Valores com ponto flutuante
    printf("O valor de b é = %f\n", b);
    printf("Digite o novo valor para b -> ");
    scanf("%f", &b);
    printf("O valor de b mudou para %f\n", b);

}
