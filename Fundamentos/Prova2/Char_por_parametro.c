/*Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes passos:

a) Defina uma estrutura que irá representar bandas de música.
Essa estrutura deve ter o nome da banda, que tipo de música ela toca,
o número de integrantes e em que posição do ranking essa
banda está dentre as suas 5 bandas favoritas;

b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo passado.
Após criar e preencher, exiba todas as informações das bandas/estruturas.



c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida,
seu programa deve exibir informações da banda
cuja posição no seu ranking é a que foi solicitada pelo usuário;

d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas
 com esse tipo de música no seu ranking.

e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está
entre suas bandas favoritas ou não;

f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e
todas as opções das questões passadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

typedef struct{
  char nome[20];
  char tipo_de_musica[20];
  int integrante;
  int top5;
}Bandas;

void print(char txt[], char n){

  for(int i = strlen(txt)+4; i!=0; i--){
    printf("-");
  }//for

  printf("\n--%s--\n",txt);

  for(int i = strlen(txt)+4; i!=0; i--){
    printf("-");
  }//for

  if(n=='\n')
  printf("\n");

}//print

void preenchimento(Bandas* bandas){
  print("Digite o nome de uma banda.",'\n');
  printf("Nome:");
  fgets(bandas->nome,20,stdin);

  

}//preenchimento



int main(){
  setlocale(LC_ALL,"");
  int modulo = 5;
  Bandas bandas[modulo];

  for(int i = 0; i!=modulo; i++){
    preenchimento(&bandas[i]);
  }//for


  return 0;
}//main
