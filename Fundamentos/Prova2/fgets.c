/*Faça um programa que receba uma frase e depois exiba quantas vezes cada vogal aparece.
Ele deve contar considerando o tamanho da String.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
  setlocale(LC_ALL,"");

  printf("Digite uma frase:");
  char frase[40];
  fgets(frase,40,stdin);
  setbuf(stdin,NULL);

  int a=0,e=0,i=0,o=0,u=0;
  for(int elements = strlen(frase); elements>=0; elements--){

    frase[elements] = tolower(frase[elements]);

    if ('a' == frase[elements])
      a++;
    if ('e' == frase[elements])
      e++;
    if ('i' == frase[elements])
      i++;
    if ('o' == frase[elements])
      o++;
    if ('u' == frase[elements])
      u++;

  }//for

  printf("\n\nA=%i\nE=%i\nI=%i\nO=%i\nU=%i\n\n",a,e,i,o,u);

  return 0;
}//main
