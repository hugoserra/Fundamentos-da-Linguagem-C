/*Escreva um programa que receba uma sigla de um estado da regi„o Sul ou Sudeste
e exiba o nome completo do estado correspondente.*/

/*Paran√° - PR
Santa Catarina - SC
Rio Grande do Sul - RS
Minas gerais - MG
espirito santo - ES
sao paulo - SP
rio de janeiro - RJ
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
  setlocale(LC_ALL,"");

  char sigla[3];
  printf("Digite um sigla de um estado do regi„o Sul ou Sudeste:");
  fgets(sigla,3,stdin);
  setbuf(stdin,NULL);
  sigla[0] = toupper(sigla[0]);
  sigla[1] = toupper(sigla[1]);

  char siglas[7][3] = {{"PR\0"},{"SC\0"},{"RS\0"},{"MG\0"},{"ES\0"},{"SP\0"},{"RJ\0"}};
  char estados[7][17] = {{"Paran·"},{"Santa Catarina"},{"Rio Grande do Sul"},{"Minas Gerais"},{"Espirito Santo"},{"S„o Paulo"},{"Rio de Janeiro"}};

  for (int elements = 0; elements<7; elements++){

    if (strcmp(sigla,siglas[elements])==0)
      printf("\n%s = %s\n\n",siglas[elements],estados[elements]);

  }//for

  return 0;
}//main
