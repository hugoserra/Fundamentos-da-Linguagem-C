/*Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes passos:

a) Defina uma estrutura que ir� representar bandas de m�sica.
Essa estrutura deve ter o nome da banda, que tipo de m�sica ela toca,
o n�mero de integrantes e em que posi��o do ranking essa
banda est� dentre as suas 5 bandas favoritas;

b) Crie uma fun��o para preencher as 5 estruturas de bandas criadas no exemplo passado.
Ap�s criar e preencher, exiba todas as informa��es das bandas/estruturas.



c) Crie uma fun��o que pe�a ao usu�rio um n�mero de 1 at� 5. Em seguida,
seu programa deve exibir informa��es da banda
cuja posi��o no seu ranking � a que foi solicitada pelo usu�rio;

d) Crie uma fun��o que pe�a ao usu�rio um tipo de m�sica e exiba as bandas
 com esse tipo de m�sica no seu ranking.

e) Crie uma fun��o que pe�a o nome de uma banda ao usu�rio e diga se ela est�
entre suas bandas favoritas ou n�o;

f) Agora junte tudo e crie um menu com as op��es de preencher as estruturas e
todas as op��es das quest�es passadas.*/

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
