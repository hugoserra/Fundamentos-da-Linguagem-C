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
  srand((unsigned)time(NULL));
  int random = rand()%100;
  int tentativas = 0;
  int resposta_usuario = 0;
  printf("Foi gerado um número aleatório de 0 a 100, descubra qual é. Você terá 6 tentativas!\n\n");
  while(tentativas!=6){
    tentativas++;
    printf("Digite seu chute:");
    scanf("%i",&resposta_usuario);

    if(random==resposta_usuario)
    {
      printf("\nNossa, você é bom nisso! o número é %i\n\n",random);
      break;
    }


    if(resposta_usuario>random)
    printf("Muito alto!\n");
    if(resposta_usuario<random)
    printf("Muito baixo!\n");



  }
  if(tentativas==6){
    printf("\n\nVocê esgotou suas tentativas, use a matemática :P\nO número era %i.\n\n\n",random);
  }

  return 0;
}
