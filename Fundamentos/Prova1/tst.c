/*Faça um programa que simule um jogo, onde o usuário deverá descobrir um número aleatório
escolhido pelo computador (de 1 a 100).
O usuário poderá realizar até 6 tentativas, o programa deverá retornar as mensagens “muito alto”, “muito baixo”
até o usuário acertar o número ou esgotar o número máximo de tentativas

Dica: Pesquise sobre como gerar um numero aleatório  utilizando a função rand da biblioteca math.h*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"");
    while(0==0)
    {
    int random = rand()%100;
    printf("%i\n",random);
    getchar();
    }


  return 0;
}
