/* 1) Elabore um programa que exiba o seu nome na primeira
linha e o seu e-mail segunda. Em seguida, exiba uma
mensagem solicitando para o usuário pressionar uma tecla.
Quando o usuário pressionar, exiba em uma nova linha o nome
do seu amigo e, em outra, o e-mail dele.
 Dica: Pesquise a função getchar para capturar uma tecla do usuário
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    printf("Ol� Mundo\n");

    return 0;
}
